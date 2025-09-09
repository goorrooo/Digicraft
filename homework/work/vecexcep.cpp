#include <iostream>
#include <vector>
#include <exception>


void retVec(){
	std::vector<int> b = {1,2,3};
	int n;
	std::cout << "Please input index" << std::endl;
	std::cin >> n;	
	if(n >= b.size()){
		throw "No element";
	}
	std::cout << "Element: " << b.at(n) << std::endl;

}
int main(){
try{
	retVec();	
} catch(const char* msg){
		std::cout << msg << std::endl;
	}

return 0;
}
