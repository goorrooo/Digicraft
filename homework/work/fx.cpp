#include <iostream>
#include <string>


//OverLoading:
int add(int,int);
std::string add(std::string, std::string);	

int main(){
	add(1,2);
	std::cout << add(1,3) << std::endl;
	std::cout << add("Gor"," Grigoryan") << std::endl;
	//int res = add(4,5);
	return 0;
	
}

int add(int a, int b){
	//std::cout << a+b << std::endl;
	return a+b;
}

std::string add(std::string a, std::string b){
		return a+b;

}
