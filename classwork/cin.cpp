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
/*
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
*/
//
//int main(){
//	std::cout << "Input number: ";
//	int num = 0;
//	std::cin >> num;
//	switch (num){
//	case 1:
//	std::cout << "Hashvapahutyun" << std::endl;
//	break;
//	case 2:
//	std::cout << "Vacharq" << std::endl;
//	break;
//	case 3:
//	std::cout << "Tnoren" << std::endl;
//	break;
//	case 4:
//	std::cout << "HR" << std::endl;
//	break;
//	case 5:
//	std::cout << "Srah" << std::endl;
//	break;
//	case 6:
//	std::cout << "Araqum" << std::endl;
//	break;	
//	case 7:
//	std::cout << "Operator" << std::endl;
//	break;
//	default:
//	std::cout << "Unknown" << std::endl;
//	break;
//
//
//}    
	



/*
enum num {
	HASHVAPAUTYUN,
	VACHARQ,
	TNOREN,
	HR,
	SRAH,
	ARAQUM,
	OPERATOR,
	UNKNOWN
};


int main(){
	enum num inp = VACHARQ;
	switch(inp){
	
	case HASHVAPAUTYUN:
	std::cout << "Hashvapahutyun" << std::endl;
	break;
	case VACHARQ:
	std::cout << "Vacharq" << std::endl;
	break;
	case TNOREN:
	std::cout << "Tnoren" << std::endl;
	break;
	case HR:
	std::cout << "HR" << std::endl;
	break;
	case SRAH:
	std::cout << "Srah" << std::endl;
	break;
	case ARAQUM:
	std::cout << "Araqum" << std::endl;
	break;
	case OPERATOR:
	std::cout << "Operator" << std::endl;
	break;
	default: 
	std::cout << "Unknown" << std::endl;
	break;

}


}

*/

enum math {
	GUMARUM,
	HANUM,
	BAJANUM,
	BAZMAPATKUM,
	UNKNOWN
};

int main(){
	enum math gorc;
	std::cout << "Input number:" << std::endl;
	int num1 = 0;
	int num2 = 0;
	std::cin >> num1;
	std::cin >> num2;
	std::cout << "Input operator: +, -, *, /  "  << std::endl;
	enum math gorc = std::string sym;
	switch(gorc){
	case GUMARUM:
	 	std::cout << num1+num2 << std::endl;
		break;
	case HANUM: 
		std::cout << num1-num2 << std::endl;
		break;
	case BAJANUM:
		std::cout << num1/num2 << std::endl;
		break;
	case BAZMAPATKUM: 
		std::cout << num1*num2 << std::endl;
		break;
	default:
		std::cout << "Unknown" << std::endl;		
		break;
}
	



}

















	



	
