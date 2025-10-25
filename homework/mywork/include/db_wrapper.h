#ifndef _DB_WRAPPER_
#define _DB_WRAPPER_



#include <string>
#include <vector>
#include <sqlite3.h>

struct TodoItem {
    int id;
    std::string title;
    std::string category;   // было category_id → должно быть имя категории
    std::string due_date;
    int done;
};

class DBWRAP {
public:
    explicit DBWRAP(const std::string& db_name);
    ~DBWRAP();

    // --- Основные функции ---
    void createTables();  // было createTable → логичнее во множественном числе
    int addCategory(const std::string& name);
    int getCategory(const std::string& name);
    int addTodo(const std::string& title, const std::string& category, const std::string& due_date);
    std::vector<TodoItem> listTodos(const std::string& filter = "--all");
    bool completeTodo(int id);

private:
    void* db_handle = nullptr;
    void execSimple(const std::string& sql);
};

#endif // _DB_WRAPPER_


