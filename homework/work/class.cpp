#include <iostream>
#include <string>

class Store{
public:
	Store(){
		m_name = "";
		m_spec = "";
		m_worktime = 0;
	};
	Store(std::string name, std::string spec, int worktime){
		m_name = name;
		m_spec = spec;
		m_worktime = worktime;
	};	
public: // Special function
	void setName(std::string name){
		m_name = name;
	}	
	std::string getName(){
		return m_name;
	}
	void setSpec(std::string spec){
		m_spec = spec;
	}	
	std::string getSpec(){
		return m_spec;
	}
	void setWtime(int worktime){
		m_worktime = worktime;
}	
	int getWtime(){
		return m_worktime;
	}

public: // Helper
	void printInfo(){
			std::cout << getName() << std::endl;
			std::cout << getSpec() << std::endl;
			std::cout << getWtime() << std::endl;
	}
private:
	std::string m_name;
	std::string m_spec;
	int m_worktime;
};
// -----------------------------------------------------

class Prof;
class Person{
public:
	Person(std::string name){
			this-> name = name; 
	};
	friend void info_pers(Prof& ps, Person& Pname);
private:
	std::string name;
};

class Prof{
public:
	Prof(std::string proff, int age){
		this-> proff = proff;
		this-> age = age;	
	};
public:
	friend void info_pers(Prof& ps, Person& Pname);
private:
	std::string proff;
	int age;
};


void info_pers(Prof& ps, Person& Pname){
	std::cout << "Name: " << Pname.name <<  "\n" << "Age: " << ps.age << "\n" << "Proffesion: " << ps.proff << std::endl;

}

int main(){
	Store shop("ZARA","Shopping",9);
	shop.printInfo();
	Person PName("Gor");
	Prof proff("Programmer",21);
	info_pers(proff,PName);
	return 0;
}













































