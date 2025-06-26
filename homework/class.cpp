#include <iostream>
#include <string>

	// This class is about school characters
class Person{
	//Special f(x)	
	public:
	Person(){
	m_Pname = "";
	m_Page = 0;
	};
	Person(std::string name, int age){
	m_Pname = name;
	m_Page = age;
};
	~Person(){
	};
	//Set & Get f(x)
	public:
		void setName(std::string name){
			m_Pname = name;
		}
		std::string getName(){
		return m_Pname;
		}
		void setAge(int age){
		m_Page = age;
		}
		int getAge(){
		return m_Page;
		};
	//Helper f(x)
	public:
	void printInfo(){
		std::cout << "Name: " << getName() << std::endl;
		std::cout << "Age: " << getAge() << std::endl;
	};
	protected:
	std::string m_Pname;
	int m_Page;
};



	//Class about student
class Student : public Person {
	//Special f(x)
	public:
		Student(){
		int m_Sgrade = 0;
	};
		Student(std::string name, int age, int grade){
		m_Pname = name;
		m_Page = age;	
		m_Sgrade = grade;
};
    	~Student(){
	};
	//Set & Get f(x)
	public:	
		void setGrade(int grade){
			m_Sgrade = grade;
	};
		int getGrade(){
		return m_Sgrade;
	};
	//Helper f(x)
	public:
		void printInfo(){
			std::cout << "Name: " << getName() << std::endl;
			std::cout << "Age: " << getAge() << std::endl;
			std::cout << "Grade: " << getGrade() << std::endl;
	};
	private:
		int m_Sgrade;

};



	//Class about teacher 
class Teucher : public Person {
	//Special f(x)
	public:
		Teucher(){
		m_Tlec = "";
	};	
		Teucher(std::string name, int age, std::string lecture){
			m_Pname = name;
			m_Page = age;
			m_Tlec = lecture;
	};
		~Teucher(){
			
	};
	//Set & Get f(x)
	public:
		void setLec(std::string lecture){
			m_Tlec = lecture;
	};
		std::string getLec(){
		return m_Tlec;
	};
	//Helper f(x)
	public:
		void printInfo(){
			std::cout << "Name: " << getName() << std::endl;
			std::cout << "Age: " << getAge() << std::endl;
			std::cout << "Lecture: "<< getLec() << std::endl;
	};
	private:	
		std::string m_Tlec;	
};



int main(){
	Person ps("Vazgen", 18);
	ps.printInfo();
	Student st("Gor",21,10);
	st.printInfo();
	Teucher tch("Anna", 45, "English");
	tch.printInfo();	
	return 0;
	
};











