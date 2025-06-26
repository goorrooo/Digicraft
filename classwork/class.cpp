#include <iostream>
#include <string>

/* Car(); - constructor

Car::Car(){
 mark

};

// ~Car(); - destructor 



class Student{
public:
	Student(){
	m_name = "Unknown";
	m_surname = "Unknown";
	m_age = 0;
};
	Student(std::string name, std::string surname, int age);
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
Student::Student(std::string name, std::string surname, int age){
	m_name = name ;
	m_surname = surname;
	m_age = age;
};

Student::~Student(){

};

int main(){/*
	Student* st = new Student() ;
    st-> setName("Gor");
	st-> getName();
    st-> setSurname("Grigoryan");
    st-> getSurname();
    st-> setAge(21);
	st-> getAge();
    st-> printInfo();*/
	Student st;
	st.printInfo();
	Student t("Vzgo","Arsenyan",12);
	t.printInfo();
	return 0;

};

*/

class Person{
public:
	Person();
	Person(std::string name, int age);
	~Person();
public:
	void setName(std::string name);
	std::string getName();
	void setAge(int age);
	int getAge();
public:
	void printInfo(){
	std::cout << getName() << std::endl;
	std::cout << getAge() << std::endl;

}	
protected:
	std::string m_Pname;
	int m_Page;


};

Person::Person()
{
	std::string m_Pname = "";
	int m_Page = 0;
	
	std::cout << "Person Ctor" << std::endl;
};

Person::Person(std::string name, int age){
	m_Pname = name;
	m_Page = age;
};

Person::~Person(){
	
	std::cout << "Person Dtor" << std::endl;

};
void Person::setName(std::string name){
	m_Pname = name;

};
std::string Person::getName(){
	return m_Pname;

};	

void Person::setAge(int age){
	m_Page = age;

};
int Person::getAge(){
	return m_Page;
};

class Student : public Person{
		public:
		Student();
		Student(std::string name, int age, int grade);
		~Student();
		void setGrade(int grade);	
		int getGrade();
		public:
			void printInfoS(){
			std::cout << getName() << std::endl;
			std::cout << getAge() << std::endl;
			std::cout << getGrade() << std::endl;

		}
		private:
		int m_Sgrade;


};
Student::Student(){

	std::cout << "Student Ctor" << std::endl;
};
 Student::Student(std::string name, int age, int grade){
	m_Sgrade = grade;

};
Student::~Student(){
	std::cout << "St Dtor" << std::endl;

};
void Student::setGrade(int grade){
	m_Sgrade = grade;
}
int Student::getGrade(){
	return m_Sgrade;
}
	
class Teucher : public Person{
	public:
		Teucher();
		Teucher(std::string name, int age, std::string lecture);
	public:	
		void setLecture(std::string lecture);
		std::string getLecture();
	public:
	void printInfoT(){
	
			std::cout << getName() << std::endl;
			std::cout << getAge() << std::endl;
			std::cout << getLecture() << std::endl;

};	
private:
	std::string m_Tlecture;	
};

void Teucher::setLecture(std::string lecture){
	m_Tlecture = lecture;
};
std::string Teucher::getLecture(){
	return m_Tlecture;
};
int main(){
	Person ps("Gor", 12);
	
	return 0;

};








