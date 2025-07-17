#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
int main(){
	std::string a = "Barev";
	std::string b = " Brat";
	a.append(b);	  // a + b	
	a.pop_back();     // delete last symbol 
	a.push_back('t'); // add symbol
	a.resize(5);  	  // string resize 		
	std::cout << a << a.length() << std::endl;	
	std::cout << pow(2,3) << std::endl; //v stepen 
	std::cout << abs(-2) << std::endl;   // modul 
	std::cout << sin(2) << std::endl;   // sinus
	std::cout << cos(2) << std::endl;   // cosinus
	std::cout << sqrt(25) << std::endl;   // armat
	std::cout << ceil(1.3) << std::endl;   // kloracnel depi mec 
	std::cout << floor(1.7) << std::endl;   // kloracnel depi poqr 
	std::cout << round(1.7) << std::endl;   // kloracnel 
	 
 
	return 0;
}	
