#ifndef _SQLITE_UTILS_
#define _SQLITE_UTILS_
#include <sqlite3.h>
// single ton - optimal version
bool create(const std::string* file, sqlite3*& db);
bool createTable(sqlite*& db);
bool insertTable(sqlite*& db, const std::string& name, const int& age);
bool selectTable(sqlite*& db);
void close(sqlite*& db);
#endif //!_SQLITE_UTILS

