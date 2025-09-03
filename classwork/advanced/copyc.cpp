#include<iostream>

class Person{
public:
Person(){}
Person(const Person& other){
	this->age = other.age;
	}

Personi operator+(const Person& other{
		Person cout;
		cout.age = age + other.age;
		return cout;
	})
public:
	int age;
};

int main(){
	Person ps;
	ps.age = 21;
	Person ps1(ps);
	std::cout << ps1.age<< std::endl;
};
