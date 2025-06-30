#include <iostream>
#include <string>

class Animal {

public:	
	void printDamage(){
		std::cout << "Damage" << std::endl;
}; 


};

class Cat : public Animal {
public:
	void printDamage(int) {
	std::cout << "Changrel" << std::endl;

};
	
};

class Dog : public Animal {
public:
	
	void printDamage(float) {
	std::cout << "Kcel" << std::endl;

};

};

class Horse : public Animal {
public:
	void printDamage(std::string) {
	std::cout << "Xpel" << std::endl;

};
};

class Fish : public Animal{

	public:
	virtual	void printName(){
		std::cout<< "Fish" << std::endl;
}
};



class Fish_1 : public Fish{

	public:
	virtual	void printName(){
		std::cout<< "Ishxan" << std::endl;
}

};

class Fish_2 : public Fish{

	public:
	virtual	void printName(){
		std::cout<< "Asetrina" << std::endl;
}

};

class Fish_3 : public Fish{

	public:
	virtual	void printName(){
		std::cout<< "Siga" << std::endl;
}

};



int main(){


 }

};
