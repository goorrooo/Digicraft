#include <iostream>
#include <string>
 // Class abput Student	
class Student{
	//Special f(x)
	public:	
	Student(){
	this->name = "";
	this->surname = "";
	this->age = 0;
	};	
	Student(std::string name, std::string surname, int age){
	std::cout << "\n" << "Student Ctor" << std::endl;
	this->name = name;
	this->surname = surname;
	this->age = age;	
	};
	~Student(){
	std::cout << "Student Dtor" << std::endl;
	};
	//Set & Get f(x)
	public:
	void setName(std::string name){
		this->name = name;
	};
	std::string getName(){
		return name;
	};
	void setSname(std::string surname){
		this->surname = surname;
	};
	std::string getSname(){
		return surname;
	};
	void setAge(int age){
		this->age = age;
	};
	int getAge(){
		return age;
	};
	//Helper f(x)
	public:
		void printInfo(){
		std::cout  << "---- Info Student ----" << std::endl;
		std::cout << "Name: " << getName() << std::endl;
		std::cout << "Surname: " << getSname() << std::endl;
		std::cout << "Age: " << getAge() << std::endl;
			
};	
	private:
		std::string name;
		std::string surname;
		int age;
};	

	//Class about Employee
class Employee{
	//Special f(x)
	public:
	Employee(){
	this->name = "";
	this->surname = "";
	this->age = 0;
	this->salary = 0;	
	};
	Employee(std::string name, std::string surname, int age, int salary){	
	std::cout << "\n" << "Employee Ctor" << std::endl;
		this->name = name;
		this->surname = surname;
		this->age = age;
		this->salary = salary; 
	};
	~Employee(){
		std::cout <<"Employee Dtor" << std::endl;
}	
	//Get & Set f(x)
	public:
		void setName(std::string name){
			this->name = name;
	}
		std::string getName(){
			return name;
	}
		void setSname(std::string surname){
			this->surname = surname;
	}
		std::string getSname(){
			return surname;
	}
		void setAge(int age){
			this->age = age;
	}
		int getAge(){
			return age;
	}
		void setSalary(int salary){
			this->salary = salary;
	}	
		int getSalary(){
			return salary;
	}
	//Helper f(x)
	public:
		void printInfo(){
			std::cout  << "---- Info Employee ----" << std::endl;
			std::cout << "Name: " << getName() << std::endl;
			std::cout << "Surname: " << getSname() << std::endl;
			std::cout << "Age: " << getAge() << std::endl;
			std::cout << "Salary: " << getSalary() << std::endl;
	
	}
	private:
		std::string name;
		std::string surname;
		int age;
		int salary;
};
	
//Class about Dog
class Dog{
	//Special f(x)
	public:
		Dog(){
			this->name = "";
			this->breed = "";	
			this->age = 0;
		
		}	
		Dog(std::string name,  std::string breed, int age){
			std::cout << "\n" << "Dog Ctor" << std::endl;
			this->name = name;
			this->breed = breed;	
			this->age = age;
	}
		~Dog(){
			std::cout << "Dog Dtor" << std::endl;
	}
	//Set & Get f(x)	
	public:
		void setName(std::string name){
			this->name = name;
	}
		std::string getName(){
			return name;
	}
		void setBreed(std::string breed){
			this->breed = breed;
	}
		std::string getBreed(){
			return breed;
	}
		void setAge(int age){
			this->age = age;
	}
		int getAge(){
			return age;
	}
	//Helper f(x)
	public:	
		void printInfo(){
			std::cout  << "---- Info dog ----" << std::endl;
			std::cout << "Name: " << getName() << std::endl;
			std::cout << "Breed: " << getBreed() << std::endl;
			std::cout << "Age: " << getAge() << std::endl;
	}
	private:
		std::string name;
		std::string breed;
		int age;
};	
	
	
int main(){
	Student st("Gor","Grigoryan", 21);
	st.printInfo();	
	Employee emp("Hamlet","Ericyan",32,120000);
	emp.printInfo();
	Dog Arjuk("Arjuk","Gampr",3);
	Arjuk.printInfo();
	return 0;
	
	};
