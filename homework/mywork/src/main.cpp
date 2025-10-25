#include "../include/db_wrapper.h"
#include <string>
#include <vector>
#include <iostream>

int main(int argc, char* argv[]) {
    DBWRAP db("todo.db");
    db.createTables(); // исправлено имя функции

    if (argc < 2) {
        std::cerr << "Usage: ./todo <command> ..." << std::endl;
        return 1;
    }

    std::string cmd = argv[1];

    // --- Добавить категорию ---
    if (cmd == "addcat") {
        if (argc != 3) {
            std::cerr << "Usage: addcat <name>\n";
            return 1;
        }
        std::string name = argv[2];
        int id = db.addCategory(name);
        if (id != -1)
            std::cout << "Category '" << name << "' added (id=" << id << ")\n";
        else
            std::cerr << "Failed to add category\n";
    }

    // --- Добавить задачу ---
    else if (cmd == "addtodo") {
        if (argc != 5) {
            std::cerr << "Usage: addtodo <title> <category> <YYYY-MM-DD>\n";
            return 1;
        }
        std::string title = argv[2];
        std::string category = argv[3];
        std::string due = argv[4];
        int id = db.addTodo(title, category, due);
        if (id != -1)
            std::cout << "Todo " << id << " added\n";
        else
            std::cerr << "Failed to add todo\n";
    }

    // --- Показать список задач ---
    else if (cmd == "list") { // было "List" — команды лучше в нижнем регистре
        std::string filter = "--all";
        if (argc == 3)
            filter = argv[2]; // было "==" вместо "="

        auto todos = db.listTodos(filter);
        for (const auto& t : todos) {
            std::cout << t.id << " | " << t.title << " | " << t.category
                      << " | " << t.due_date << " | "
                      << (t.done ? "done" : "pending") << "\n";
        }
    }

    // --- Завершить задачу ---
    else if (cmd == "complete") {
        if (argc != 3) {
            std::cerr << "Usage: complete <id>\n";
            return 1;
        }
        int id = std::stoi(argv[2]);
        if (db.completeTodo(id))
            std::cout << "Marked todo #" << id << " as done\n";
        else
            std::cerr << "Failed to mark todo\n";
    }

    // --- Неизвестная команда ---
    else {
        std::cerr << "Unknown command\n";
    }

    return 0;
}
