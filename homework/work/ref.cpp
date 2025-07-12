#include <iostream>
#include <string>


int main(){
	int num = 0;
 	std::cin >> num;
 	std::cout << " Address num :  " << &num <<	std::endl;
	int& Rnum = num; // partavorenq arjeq tal referin"
 	std::cout << " Address Rnum:  " << &Rnum <<	std::endl;
 	std::cout << Rnum << "- Rnum"<< "\n" << num << " - num" << std::endl; 		
 	Rnum = 2;
 	std::cout << " Change value Rnum - cout num:   " << num <<	std::endl;
 return 0;	

}
