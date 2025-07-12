#include <iostream>
#include <string>
struct Old{
	int o;
};	
struct New{
	int z;
	Old old;
};
struct Point{
	int x,y;
	New olz;
};
struct Car {
	std::string name;
	std::string model;
	int speed;
	int age;
	Point place;
	void getInfo(){
		
	std::cout << name << std::endl;
	std::cout << model << std::endl;
	std::cout << speed << std::endl;
	std::cout << age << std::endl;
	std::cout << place.x << std::endl;
	std::cout << place.olz.z << std::endl;
	std::cout << place.olz.old.o << std::endl;
}
};


int main(){
	Car car1;
	car1.name = "BMW";
	car1.model = "F90";
	car1.speed = 320;
	car1.age = 2023;
	car1.place.x = 12;
	car1.place.y = 12;
	car1.place.olz.z = 10;
	car1.place.olz.old.o = 5;
	car1.getInfo();
	return 0;
}
