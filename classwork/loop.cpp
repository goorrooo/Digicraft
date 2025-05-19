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




*/

int main(){

int i = 0;
for(int i = 0; i<3; i++ ){

std::string log = " ";
std::string pass = " ";
std::cout << "Input your login: " << std::endl;
std::cin >> log;
/*
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


}*/
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




