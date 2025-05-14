#include <iostream>
#include <string>

/*
struct student {
	std::string name;
	int  grade;
};


int main(){
	student st1;
	std::cout << "Input your name" << std::endl;
	std::cin >> st1.name;
	std::cout << "Input your grade" << std::endl;
	std::cin >> st1.grade;
 	if (st1.grade < 0){
		std::cout <<  "Input positive number " << std::endl;
 		return 1;
	}


	else if(st1.grade <= 40 ){
	std::cout << st1.name << " Your grade D" << std::endl;

	} else if( st1.grade <= 60) {
		std::cout << st1.name << " Your grade C" << std::endl;
	} else if (st1.grade <=80 ) {
		std::cout << st1.name << " Your grade B" << std::endl;
	
	} else if (st1.grade <=100){
		std::cout << st1.name << " Your grade A" << std::endl;
}

}

*/

struct emlogee {
	std::string name;
	int ashvarc;
	int porc;

};
 

int main (){
	emlogee emp1;
	std::cout << "Input your name" << std::endl;
	std::cin >> emp1.name;
	std::cout << "Input your ashxatavarc" << std::endl;
	std::cin >> emp1.ashvarc;
	int ashv = emp1.ashvarc;
	std::cout << "Your porc" << std::endl;
	std::cin >> emp1.porc;
	if (emp1.porc < 0 ){
	std::cout << "Input positive number" << std::endl;
	return 1;
} else if (emp1.porc < 2){
	std::cout << "Bonus: " <<  5.0/100*ashv << std::endl;
}else if (emp1.porc <= 5){
	std::cout << "Bonus: " << 10.0/100*ashv << std::endl;

}else {
	std::cout << "Bonus: " << 15.0/100*ashv<< std::endl;

}


}








