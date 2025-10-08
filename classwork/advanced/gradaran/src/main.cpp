#include <iostream>
#include <sqlite3.h>
#include "../include/sqlutill.h"

int main(){
	sqlite3* db = nullptr;
	const std::string file = "my.db";
	const std::string name = "Kim";
	create(file, db);
	createTable(db);
	insert(db,name, 20);
	selectTable(db);
	close(db);

	return 0;	
};
