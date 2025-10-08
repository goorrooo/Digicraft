#include <iostream>
#include <sqlite3.h>
#include "../include/sqlutill.h"

bool create(const std::string& file, sqlite3*& db){
	int rc = sqlite3_open(file.c_str(), &db); ////
	if (rc != SQLITE_OK){
		std::cerr << << sqlite3_errmsg(db) << "\n";
		sqlite3_close(db);
		return false;
	}	
		return true;
};
int createTable(sqlite*& db){
	const* char command = "CREATE TABLE IF NOT EXISTS person (id INTEGER PRIMARY KEY, name TEXT, age INTEGER);"
	char* errmsg = nullptr;

};
int insertTable(sqlite*& db, const std::string& name, const int& age);
int selectTable(sqlite*& db);
int close(sqlite*& db);

