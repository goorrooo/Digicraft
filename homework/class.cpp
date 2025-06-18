#include <iostream>
#include <string>
/*
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
	return 0;
};

*/

class Point{
private:
	int x;
	int y;
public:

	int getX(){
		return x;
};	
	void setX(std::string a = ""){
		std::cin >> x;
};
	
	int getY(){
		return y;
		};
		void setY(int vy){
	int y = vy;
};
	
	
void Print(){
	std::cout << "X: " << x << "\n " << "Y: " << y << std::endl;
	};	
};


int main(){
	Point a;
	a.setX();
	int rs = a.getX();
	std::cout << rs << std::endl;
	return 0;
};


