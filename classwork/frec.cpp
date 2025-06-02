#include <iostream>
#include <string>
/*
int fact(int);

int main (){
	int num = 0;
	std::cin >> num;
	if(num >= 0){
	std::cout << fact(num) << std::endl;
	}
	return 0;
}

int fact(int num){
	if(num == 0){
	return 1;
	
}
return num * fact(num - 1 );


};


*/

int fib(int);


int main(){
	int n = 0;
	std::cin >> n;
	if(n>0){
		std::cout << fib(n) << std::endl;
	}

	return 0;

}





int fib(int n){
	if(n==1 || n==2){
	return 1; 
	}
	return fib(n-1) + fib(n - 2);


};































