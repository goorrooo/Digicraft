#include <iostream>
#include <string>

/* Car(); - constructor

Car::Car(){
 mark

};

// ~Car(); - destructor 

*/ 


class Student{
public:
	Student();
	~Student();
	void setName(std::string name);
	std::string getName();
	void setSurname(std::string surname);
	std::string getSurname();	
	void setAge(int age);
	int getAge();
	void printInfo();
private:
	std::string m_name;
	std::string m_surname;
	int m_age;
};

void Student::setName(std::string name){
	m_name = name;

};
std::string Student::getName(){
	return m_name;

};

void Student::setSurname(std::string surname){
	m_surname = surname;
};

std::string Student::getSurname(){
	return m_surname;
};

void Student::setAge(int age){
	m_age = age;
};

int Student::getAge(){
	return m_age;
};

void Student::printInfo(){
	std::cout << "Name: "  << m_name << std::endl;
	std::cout  << "Surname: " << m_surname << std::endl;
	std::cout << "Age: " << m_age << std::endl;


};
Student::Student(){
	m_name = "";
	m_surname = "";
	m_age = 0;	

};

Student::~Student(){

};

int main(){
	Student* st = new Student() ;
    st-> setName("Gor");
	st-> getName();
    st-> setSurname("Grigoryan");
    st-> getSurname();
    st-> setAge(21);
	st-> getAge();
    st-> printInfo();
	return 0;

};











