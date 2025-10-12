#include <iostream>
#include <sqlite3.h>
#include "../include/sqlutill.h"

int main(){
	Person& db = Person::getInstance("test.db");
	db.create();
	db.createTable();
	db.insertTable("Gor",21);
	db.insertTable("Davit",16);
	db.insertTable("Arman",35);
	db.selectTable();
	return 0;	
};
