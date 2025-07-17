#include <iostream>
#include <string>

float divide(float a, float b);

int main(){
	try{
		divide(0,3.1);
	} 
	catch(std::string err){
		if(err == "Divide") 
			std::cout << "False" << std::endl;
	}
	return 0;
}


float divide(float a, float b){
	if(a == 0 || b == 0) throw ("Divide");
	else 
		return a/b;  
}
