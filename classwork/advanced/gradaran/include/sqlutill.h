#ifndef _SQLITE_UTILS_
#define _SQLITE_UTILS_

#include <string>	
#include <sqlite3.h>
// single ton - optimal version
	
class Person{	
public:
	std::string name;
	int age;
	static Person& getInstance(const std::string& filedb = "test.db"){
		static Person instance(filedb);
		return instance;
	}

bool create();
bool createTable();
bool insertTable(const std::string& name, int age);
bool selectTable();
private:
	Person(const std::string& filedb);
   ~Person();
	Person(const Person&) = delete;
	Person& operator=(const Person&) = delete;
	void closeDB();
	sqlite3* db;
	std::string filename;
};	
#endif //!_SQLITE_UTILS_

