#include <iostream>
#include <string>





/*        loop in c++
int main(){
	for(int i = 0; i<10 ; i++;){
	std::cout << i << std::endl;
}

}

while(i < 10){
	std::cout << i << std::endl;
	i++;	
}

do {


}while(i<10);






int main(){

int i = 0;
for(int i = 0; i<3; i++ ){

std::string log = " ";
std::string pass = " ";
std::cout << "Input your login: " << std::endl;
std::cin >> log;

std::cout << "Input your password: " << std::endl;
std::cin >> pass; 
	if(log != "Student")
	i++;
	std::cout << "Login failed" << std::endl;
	continue;	
} else if (pass != "123"){
	i++;
 	std::cout << "Password failed" << std::endl;
	continue;
 } else {
	std::cout << "Login Succesfully" << std::endl;
	break;
}	


}
	if(log == "Student"){
	std::cin >> pass;
	if(pass == "123"){
	std::cout << "Sucessfully" << std::endl;
	break;	
	}
} std::cout << "Error" << std::endl;




}
return 0;

}

*/

enum eMap { MATHEM, ENGLISH, PROGRAM, UNKNOWN };



int main( ){
std::string math = " ";
std::string engl = " ";
std::string prog = " ";
eMap map;
int i = 0;
	for(int i = 0; i < 3; i++){
		eMap map = static_cast<eMap>(i);
		switch(map){
			case MATHEM:
				std::cout << "What is +:" << std::endl;
				std::cin >> math;
				if(math == "gumarum"){
				std::string results = "Your results 1/3 ";}
				
			case ENGLISH:
				std::cout << "What is Englis" << std::endl;
				std::cin >> engl;
				if(engl == "lezu"){
				std::string results = "Your results 2/3 ";}
			case PROGRAM:
				std::cout << "HTML, CSS, Java...?" << std::endl;
				std::cin >> prog;
				if(prog == "script"){
				std::string results = "Your results 3/3 ";
				std::cout << results << std::endl;}
				
			default:
				std::cout << "Error" << std::endl;





		}
	}

}

















