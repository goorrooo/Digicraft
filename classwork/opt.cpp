#include <iostream>
#include <string>

class Animal {
public:
	Animal(std::string& name) : 
	m_name(name)
			  {

				}
public:
	 const std::string& getName(){ return m_name;}

protected:
	const	  std::string& m_name;

};

class Fish : public Animal{
public:
	Fish(std::string& name, int size) : 
		Animal(name),
		m_size(size)							   	
	 { }
public:
	int getSize(){ return m_size;}

private:	
	int m_size;

};

class Shark : public Fish {
	public:
		Shark(std::string& name, int size, int weight) : 
				Fish(name, size),
				m_weight(weight)
{}

public:		
	int getWeight(){return m_weight;}



private:
	int m_weight;

};
int main(){
	std::string name = "Akula";
	Shark Akula(name, 3, 200);
	std::cout << Akula.getWeight() << std::endl;
	std::cout << Akula.getName() << std::endl;
	std::cout << Akula.getSize() << std::endl;
	return 0;
	
};



















