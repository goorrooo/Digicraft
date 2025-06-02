#include <iostream>
#include <string>



/*
int sum(int iNum1, int iNum2, int iNum3){
int iSum = 0;
iSum = iNum1 + iNum2 + iNum3;	
return iSum;
}

int main(){
int iNum1;
int iNum2;
int iNum3;
std::cout << "Input Number" << std::endl;
std::cin >> iNum1;
std::cout << "Input Number" << std::endl;
std::cin >> iNum2;
std::cout << "Input Number" << std::endl;
std::cin >> iNum3;
int result = sum(iNum1,iNum2,iNum3);
std::cout << result << std::endl;

};

int sum(){
	int iSum = 0;
	for(int i = 1; i < 11; i++){
	 iSum = i + iSum; 
}
	return iSum;
}





int main(){
	int result = sum();
	std::cout << result << std::endl;
	return 0;
}
----------------------------------------------------------------------------
			----overloading----


int add(int,int);
float add(float,float);
double add(double,double);



int main(){
	std::cout << add(4,4) << std::endl;
	std::cout << add(4.1f,4.2f) << std::endl;
	std::cout << add(2312313,4444444) << std::endl;

};




	
int add(int a , int b){
	return a+b;

};
float add(float a, float b){
	return a+b;
};

double add(double a, double b){
	return b;
};


*/

struct Student{
	std::string name = "";
	int grade = 0;

};

struct Employee{
	std::string name;
	float salary; 

};

void printInfo(Student);
void printInfo(Employee);

int main(){
	Student st;
	 st.name = "Gor";
	
	st.grade = 7;
	Employee emp;
	emp.name = "Gor";
	emp.salary = 353132.554f;
	printInfo(st);


}



void printInfo(Student st){
	std::cout << st.name << st.grade << std::endl;


}









































