#include <iostream>


/*
int main(){
	int a =7;
	int* p = &a;	
	std::cout << p << std::endl;
	*p = 10;
	std::cout << a << std::endl;

}
-------------------------------------------------------------------------------------------
*/


int main(){
	int num = 10;	
	int* number = &num;
	std::cout << num << std::endl;
	std::cout << number << std::endl;
	std::cout << *number << std::endl;
	std::cout << &number << std::endl;
	
	int b = 15;
	number = &b;	
	std::cout << b << std::endl;
	std::cout << number << std::endl;
	std::cout << *number << std::endl;
	std::cout << &number << std::endl;
	

}
