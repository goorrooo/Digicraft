#include <iostream>
#include <sqlite3.h>
#include "../include/sqlutill.h"

bool create(const std::string& file, sqlite3*& db){
	int rc = sqlite3_open(file.c_str(), &db); ////
	if (rc != SQLITE_OK){
		std::cerr << "Open failed: "<< sqlite3_errmsg(db) << "\n";
		sqlite3_close(db);
		return false;
	}	
		return true;
};

bool  createTable(sqlite3*& db){
	const char* command = "CREATE TABLE IF NOT EXISTS person (id INTEGER PRIMARY KEY, name TEXT, age INTEGER);";
	char* errmsg = nullptr;
	int rc = sqlite3_exec(db, command, nullptr, nullptr, &errmsg);
	if(rc != SQLITE_OK){
		std::cerr << "Failed CREATE: " << errmsg << "\n";
		sqlite3_free(errmsg);
		return false;	
	}
	return true;

};

bool insertTable(sqlite3*& db, const std::string& name, const int& age){
	std::string sql = "INSERT INTO person (name,age) VALUES ('" + name + "', " + std::to_string(age) + ");";
	char* errmsg = nullptr;
	int rc = sqlite3_exec(db,sql.c_str(), nullptr, nullptr, &errmsg);
	if (rc != SQLITE_OK){
			std::cerr << "Failed INSERT: " << errmsg << "\n";
			sqlite3_free(errmsg);
			return false;
		}
			return true;
	};

bool selectTable(sqlite3*& db){	
	const char* sql = "SELECT * FROM person;";
	auto callback = [](void*, int argc, char** argv, char** azCoName) -> int {
			for(int i = 0; i < argc; i++){
			std::cout << azCoName[i] << " = " << (argv[i] ? argv[i] : "NULL") << "\n";
	}
	std::cout << "-----------------------" << std::endl;
			return 0;
	};

	char* errmsg = nullptr;
	int rc = sqlite3_exec(db,sql,callback,nullptr, &errmsg);
	if (rc != SQLITE_OK){
		std::cerr << "Failed SELECT: " << errmsg << "\n";
		sqlite3_free(errmsg);
		return false;
	}	
		return true;
	};

void close(sqlite3*& db){
	if(db){	
		sqlite3_close(db);
		db = nullptr;
	}	
	};






