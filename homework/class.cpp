#include <iostream>
#include <string>

class Animals {

public:
	void getInfo(){
	std::cin >> name;
	std::cin >> age;
	std::cin >> kg;
	std::cout << "Name: "<< name << "\n"<<"Age: " << age << "\n" <<"Kg: " << kg <<  std::endl;
};
private:	
		std::string name;
		int age;
		int kg;		
};

int main(){
	Animals katu;
	Animals shun;
	katu.getInfo();
	shun.getInfo();	
	return 0;
};
