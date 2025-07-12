#include <iostream>
#include <string>
enum City{
	EREVAN,
	GYUMRI,
	VANADZOR
};

struct Info{
	int bnakich;
	int weather;
	int km_2;
	City Ecity;
	void getInfo(){
	std::cout << bnakich << std::endl;
	std::cout << weather << std::endl;
	std::cout << km_2 << std::endl;
	std::cout << Ecity << std::endl;
	
}
};	

int main(){
	Info my_info;	
	my_info.bnakich = 1000;
	my_info.weather = 23;
	my_info.km_2 = 10000;
	my_info.Ecity = City::GYUMRI;
	my_info.getInfo();	
	switch(my_info.Ecity){
		case EREVAN: std::cout << "Erevan";
		break;
		case GYUMRI: std::cout << "Gyumri" << std::endl;
		break;
		default: std::cout << "Unknown";
}
	return 0;
};












