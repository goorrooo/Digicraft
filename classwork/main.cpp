#include <iostream>
#include <string>

/*
int main(){
	int num = 7;
	float a = 7.0;
	double b = 8.11; //diff double  float - size
	char c = 'c';
	bool d = true/false; 
	std::string string = "Gor";
}
*/


/*
int main()
{
        int num = 7;
	std::cout << num << std::endl;
	std::cout << sizeof(int) << std::endl;
	float a = 7.0;
	std::cout << a << std::endl;
	std::cout << sizeof(float) << std::endl;
	double b = 8.0;
	std::cout << b << std::endl;
	std::cout << sizeof(int) << std::endl;
	char c = 'a';
	std::cout << c << std::endl;
	std::cout << sizeof(char) << std::endl;
	bool d = true; 
	std::cout << d << std::endl;
	std::cout << sizeof(bool) << std::endl;
	std::string name  = "Gor";
	std::cout << name << std::endl;
	std::cout << sizeof(std::string) << std::endl;
	
	return 0;

}

*/
/*
>>>>>>> main
int main()
{
	long int  a = 7 ;
	std::cout << a << std::endl;
	std::cout << sizeof(int) << std::endl;
<<<<<<< HEAD
	short int b = 7;
=======
        unsigned  int b = -7;
>>>>>>> main
	std::cout << b << std::endl;
	std::cout << sizeof(int) << std::endl;
	return 0;
}
<<<<<<< HEAD
=======
*/
/*
int main(){
	float num = 4.756;
	unsigned int a = num;
	std::cout << a << std::endl;
	int  num_1 = 3;
	char b = num_1;
	std::cout << b << std::endl;
	double num_2 = 2.2;
	long c =  num_2;	
	std::cout << c << std::endl;
	

}
*/
/*
int main(){
	float num  = 4.0;
	int a = (int)num;
	std::cout << a << std::endl;
	int num_1 = 1;
	char b = (char)num_1;
	std::cout << b << std::endl;
	double num_2 = 1.2;
	long c = (long)num_2; 
	std::cout << c << std::endl;
}

*/
/*
int main(){
	float num = 1.2;
	int a = static_cast<int>(num);
	std::cout << a << std::endl;
	double num1 = 4.3;
	long b = static_cast<long>(num1);
	std::cout << b << std::endl;
	int num2 = 2;
	char c  = static_cast<char>(num2);
	std::cout << c << std::endl; 
}
*/
/*
int main (){
	const int a = 1;
	const float b = 1.2;
	const bool c = true;
	std::cout << a  <<  "\n" << b << "\n"<< c << "\n " << std::endl;

 
}

*/
//int main(){
//	float num  = 12.13 ;
//	std::string  a  = num;
//	float num1 = "22"';
//	char b = '*';
//}	
/*
struct person  {
	int age;
	std::string name;
	std::string surname;
};
*/
//int main(){
//	person student;
//	student.age = 21;
//	student.name = "Gor";
//	student.surname = "Grigoryan";
//	std::cout << "Name: " << student.name << "\n" << "Surname: " << student.surname << std::endl;
//}
//


/*
struct {
	std::string brand;
	int year;
	std::string color;

}car1,car2; 
int main(){
	person student;
	student.age = 21;
	student.name = "Gor";
	student.surname = "Grigoryan";
	std::cout << "Student" << "\n " <<  "Name: " << student.name << "\n" << "Surname: " << student.surname << "\n" << "Age: " << student.age << std::endl;
	person broker;
	broker.age = 18;
	broker.name = "Vardges";	
	broker.surname = "Papoyan";
	std::cout << "Broker"  << "\n" << "Name: " << broker.name << "\n" << broker.surname << "\n" << "Age: " << broker.age <<  std::endl;
	car1.brand = "M-Benz";
	car1.year = 2025;
	car1.color = "Black";
	std::cout << "Brand: " << car1.brand << "\n" << "Year: " << car1.year << "\n" << "Color: " << car1.color << std::endl;
	car2.brand = "BMW";
	car2.year = 2023;
	car2.color = "Green";
	std::cout << "Brand: " << car2.brand << "\n" << "Year: " << car2.year << "\n" << "Color: " << car2.color << std::endl;
}

struct person {	
	int age;
	std::string name;
	std::surname;
}

struct group {
	person st1;
	person st2;
	person st3;
	person st4;
	person st5;
	person st6;
};

int main(){
	person st1;
	st1.age = 24;
	st1.name = "Vardan";
	st1.surname = "Ginosyan";
	std::cout << "Name: " << st1.name << "\n" << "Surname: " << st1.surname << "\n" << "Age: " << st1.age << std::endl;
	person st2;
	st2.age = 22;
	st2.name = "Mamikon";
	st2.surname = "Aslanyan";
	std::cout << "Name: " << st2.name << "\n" << "Surname: " << st2.surname << "\n" << "Age: " << st2.age << std::endl;

	

}

*/
struct student{
	std::string name;
	std::string surname;
};

struct group{
	std::string name;
	student st1;
	student st2;
	student st3;
	student st4;
	student st5;
};


struct bajin  {
	std::string name;
	group grp;
};


struct ambion {
	std::string name;
 	bajin bjn;
};

struct univer {
	std::string name;
	std::string city;
	ambion amb;

};
/*	univer vph
	ambion it
	bajin progrm
	group mygroup
	student gor;
	student alik;
	student garik;
	gor.name = "Gor";
	mygroup.st1  = gor;
	
int main(){
	univer univer;
	univer.name = "VPH";
	univer.city  = "Vanadzor";
	ambion amb;

	univer.amb.name = "IT";
	bajin bjn;
	amb.bjn.name = "UI/UX Design";
		

	group grp;		
	bjn.grp.name = "First"; 
	
	
	student st1;
	st1.name = "Gor ";
	st1.surname = "Grigoryan";
	grp.st1 = st1;
	std::cout << univer.name << "\n" << univer.city << "\n" << univer.amb.name << "\n" << amb.bjn.name  << "\n" << bjn.grp.name << "\n" << grp.st1.name << grp.st1.surname <<  std::endl; 
	
	student st2;	
	st2.name = "Michael ";
	st2.surname = "Jackson";
	grp.st2 = st2;
	std::cout << "\n"<< univer.name << "\n" << univer.city << "\n" << univer.amb.name << "\n" << amb.bjn.name  << "\n" << bjn.grp.name << "\n" << grp.st2.name << grp.st2.surname <<  std::endl; 
	student st3;	
	st3.name = "Rafik ";
	st3.surname = "Kirakosyan";
	grp.st3 = st3;
	std::cout << "\n"  <<univer.name << "\n" << univer.city << "\n" << univer.amb.name << "\n" << amb.bjn.name  << "\n" << bjn.grp.name << "\n" << grp.st3.name << grp.st3.surname <<  std::endl; 

	student st4;	
	st4.name = "Avag ";
	st4.surname = "Avagyan";
	grp.st4 = st4;
	std::cout << "\n"  << univer.name << "\n" << univer.city << "\n" << univer.amb.name << "\n" << amb.bjn.name  << "\n" << bjn.grp.name << "\n" << grp.st4.name << grp.st4.surname <<  std::endl; 
	
 	student st5;	
	st5.name = "Arevik ";
	st5.surname = "Ananyan";
	grp.st5 = st5;
	std::cout << "\n"<< univer.name << "\n" << univer.city << "\n" << univer.amb.name << "\n" << amb.bjn.name  << "\n" << bjn.grp.name << "\n" << grp.st5.name << grp.st5.surname <<  std::endl; 
 };

*/



















