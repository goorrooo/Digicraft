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
for(i<3; i++){
std::string log;
std::string pass;
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


return 0;

}




