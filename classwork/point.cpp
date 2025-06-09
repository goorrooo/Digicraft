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
int& r = a - reference 
*/
struct Student{
	std::string* name = nullptr;
	int* grade = nullptr;

};


int main(){
	Student* pSt = new Student();
	(*pSt).name = new std::string("Gor");
	(*pS).grade = new int(1);
	std::cout << *(pSt->name) << std::endl;
	std::cout << *(pSt->grade) << std::endl;
	

}


/*

int main(){
	int a = 1;
	int& r = a;
	r = 10;
	std::cout << r << std::endl; 


	

};



*/


















