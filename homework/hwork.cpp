#include <iostream>
#include <string>

struct person {
	int age;
	std::string name;
	std::string surname;	
};

struct group {
	person st1;	
	person st2;
	person st3;
	person st4;
	person st5;

};




int main(){
	person st1;
        st1.age = 20;
	st1.name = "Mihran";
	st1.surname = "Exiazaryan";
	std::cout<< "Student 1" <<"\n"<<"Name: " << st1.name << "\n"<< "Surname: " << st1.surname << "\n" << "Age: " << st1.age <<  std::endl;
	
	person st2;
        st2.age = 17;
	st2.name = "Ervand";
	st2.surname = "Martirosyan";
	std::cout << "Student 2" << "\n"  << "Name: " << st2.name << "\n"<< "Surname: " << st2.surname << "\n" << "Age: " << st2.age <<  std::endl;

	person st3;
        st3.age = 21;
	st3.name = "Erem";
	st3.surname = "Martoyan";
	std::cout << "Student 3" << "\n"  << "Name: " << st3.name << "\n"<< "Surname: " << st3.surname << "\n" << "Age: " << st3.age <<  std::endl;

	person st4;
        st4.age = 25;
	st4.name = "Gagik";
	st4.surname = "Matosyan";
	std::cout << "Student 4" << "\n"  << "Name: " << st4.name << "\n"<< "Surname: " << st4.surname << "\n" << "Age: " << st4.age <<  std::endl;
	
	person st5;
        st5.age = 27;
	st5.name = "Mexak";
	st5.surname = "Mexakyan";
	std::cout << "Student 5" << "\n"  << "Name: " << st5.name << "\n"<< "Surname: " << st5.surname << "\n" << "Age: " << st5.age <<  std::endl;
}
