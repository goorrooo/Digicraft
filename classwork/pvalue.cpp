#include <iostream>
#include <string>

int add(int num){
	num += num + 1;
	return num;

};

int radd(int& num){	
	return num;
};

int padd( const int* num){
	return num;
};


int main(){
	int a = 10;
	add(a);
	padd(&a);
	radd(a);
	return 0;
};



