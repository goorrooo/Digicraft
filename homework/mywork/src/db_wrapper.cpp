#include "../include/db_wrapper.h"
#include <iostream>
#include <cstring>

DBWRAP::DBWRAP(const std::string& db_name) {
    sqlite3* db = nullptr;
    if (sqlite3_open(db_name.c_str(), &db) != SQLITE_OK) {
        std::cerr << "Failed to open DB: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_close(db);
        db_handle = nullptr;
    } else {
        db_handle = db;
    }
}

DBWRAP::~DBWRAP() {
    if (db_handle) sqlite3_close(static_cast<sqlite3*>(db_handle));
}

void DBWRAP::execSimple(const std::string& sql) {
    char* err = nullptr;
    sqlite3* db = static_cast<sqlite3*>(db_handle);
    if (!db) return;
    if (sqlite3_exec(db, sql.c_str(), nullptr, nullptr, &err) != SQLITE_OK) {
        std::cerr << "SQL error: " << (err ? err : "unknown") << std::endl;
        if (err) sqlite3_free(err);
    }
}

void DBWRAP::createTables() {
    const char* sql =
        "BEGIN;"
        "CREATE TABLE IF NOT EXISTS categories ("
        "   id INTEGER PRIMARY KEY AUTOINCREMENT,"
        "   name TEXT UNIQUE"
        ");"
        "CREATE TABLE IF NOT EXISTS todos ("
        "   id INTEGER PRIMARY KEY AUTOINCREMENT,"
        "   title TEXT,"
        "   category_id INTEGER,"
        "   due_date TEXT,"    // ← исправлено: было due_data
        "   done INTEGER DEFAULT 0,"
        "   FOREIGN KEY(category_id) REFERENCES categories(id)"
        ");"
        "COMMIT;";
    execSimple(sql);
}

int DBWRAP::getCategory(const std::string& name) {
    sqlite3* db = static_cast<sqlite3*>(db_handle);
    if (!db) return -1;

    const char* sql = "SELECT id FROM categories WHERE name = ?1;";
    sqlite3_stmt* stmt = nullptr;
    int id = -1;

    if (sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr) == SQLITE_OK) {
        sqlite3_bind_text(stmt, 1, name.c_str(), -1, SQLITE_TRANSIENT);
        if (sqlite3_step(stmt) == SQLITE_ROW) {
            id = sqlite3_column_int(stmt, 0);
        }
    } else {
        std::cerr << "Failed to prepare getCategory: " << sqlite3_errmsg(db) << std::endl;
    }

    if (stmt) sqlite3_finalize(stmt);
    return id;
}

int DBWRAP::addCategory(const std::string& name) {
    sqlite3* db = static_cast<sqlite3*>(db_handle);
    if (!db) return -1;

    const char* sql = "INSERT INTO categories(name) VALUES(?1);";
    sqlite3_stmt* stmt = nullptr;

    if (sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr) != SQLITE_OK) {
        std::cerr << "Failed to prepare addCategory: " << sqlite3_errmsg(db) << std::endl;
        return -1;
    }

    sqlite3_bind_text(stmt, 1, name.c_str(), -1, SQLITE_TRANSIENT);
    int rc = sqlite3_step(stmt);
    sqlite3_finalize(stmt);

    if (rc == SQLITE_DONE)
        return static_cast<int>(sqlite3_last_insert_rowid(db));

    // если категория уже есть
    return getCategory(name);
}

int DBWRAP::addTodo(const std::string& title, const std::string& category, const std::string& due_date) {
    sqlite3* db = static_cast<sqlite3*>(db_handle);
    if (!db) return -1;

    char* err = nullptr;
    if (sqlite3_exec(db, "BEGIN TRANSACTION;", nullptr, nullptr, &err) != SQLITE_OK) {
        std::cerr << "BEGIN TRANSACTION failed: " << (err ? err : "") << std::endl;
        if (err) sqlite3_free(err);
        return -1;
    }

    int cat_id = getCategory(category);
    if (cat_id == -1) {
        cat_id = addCategory(category);
        if (cat_id == -1) {
            sqlite3_exec(db, "ROLLBACK;", nullptr, nullptr, nullptr);
            return -1;
        }
    }

    const char* sql = "INSERT INTO todos(title, category_id, due_date) VALUES(?1, ?2, ?3);";
    sqlite3_stmt* stmt = nullptr;

    if (sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr) != SQLITE_OK) {
        std::cerr << "Failed to prepare addTodo: " << sqlite3_errmsg(db) << std::endl;
        sqlite3_exec(db, "ROLLBACK;", nullptr, nullptr, nullptr);
        return -1;
    }

    sqlite3_bind_text(stmt, 1, title.c_str(), -1, SQLITE_TRANSIENT);
    sqlite3_bind_int(stmt, 2, cat_id);  // ← исправлено: раньше было bind_text
    sqlite3_bind_text(stmt, 3, due_date.c_str(), -1, SQLITE_TRANSIENT);

    int rc = sqlite3_step(stmt);
    sqlite3_finalize(stmt);

    if (rc != SQLITE_DONE) {
        std::cerr << "Failed to insert todo\n";
        sqlite3_exec(db, "ROLLBACK;", nullptr, nullptr, nullptr);
        return -1;
    }

    if (sqlite3_exec(db, "COMMIT;", nullptr, nullptr, &err) != SQLITE_OK) {
        std::cerr << "COMMIT Failed: " << (err ? err : "") << std::endl;
        if (err) sqlite3_free(err);
        sqlite3_exec(db, "ROLLBACK;", nullptr, nullptr, nullptr);
        return -1;
    }

    return static_cast<int>(sqlite3_last_insert_rowid(db));
}

std::vector<TodoItem> DBWRAP::listTodos(const std::string& filter) {
    std::vector<TodoItem> out;
    sqlite3* db = static_cast<sqlite3*>(db_handle);
    if (!db) return out;

    std::string sql =
        "SELECT todos.id, todos.title, categories.name, todos.due_date, todos.done "
        "FROM todos JOIN categories ON todos.category_id = categories.id ";

    bool useParam = false;
    std::string categoryParam;

    if (filter == "--pending") {
        sql += "WHERE todos.done = 0 ";
    } else if (filter.rfind("--category=", 0) == 0) {
        useParam = true;
        categoryParam = filter.substr(strlen("--category="));
        sql += "WHERE categories.name = ?1 ";
    }

    sql += "ORDER BY todos.id;";
    sqlite3_stmt* stmt = nullptr;

    if (sqlite3_prepare_v2(db, sql.c_str(), -1, &stmt, nullptr) != SQLITE_OK) {
        std::cerr << "Failed to prepare listTodos: " << sqlite3_errmsg(db) << std::endl;
        return out;
    }

    if (useParam) {
        sqlite3_bind_text(stmt, 1, categoryParam.c_str(), -1, SQLITE_TRANSIENT);
    }

    while (sqlite3_step(stmt) == SQLITE_ROW) {
        TodoItem it;
        it.id = sqlite3_column_int(stmt, 0);
        it.title = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 1));
        it.category = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 2));
        it.due_date = reinterpret_cast<const char*>(sqlite3_column_text(stmt, 3));
        it.done = sqlite3_column_int(stmt, 4);
        out.push_back(it);
    }

    sqlite3_finalize(stmt);
    return out;
}

bool DBWRAP::completeTodo(int id) {
    sqlite3* db = static_cast<sqlite3*>(db_handle);
    if (!db) return false;

    const char* sql = "UPDATE todos SET done = 1 WHERE id = ?1;";
    sqlite3_stmt* stmt = nullptr;

    if (sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr) != SQLITE_OK) {
        std::cerr << "Failed to prepare completeTodo: " << sqlite3_errmsg(db) << std::endl;
        return false;
    }

    sqlite3_bind_int(stmt, 1, id);
    int rc = sqlite3_step(stmt);
    sqlite3_finalize(stmt);
    return rc == SQLITE_DONE;
}
