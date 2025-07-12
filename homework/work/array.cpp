#include <iostream>
#include <string>

/*
int main(){
int array;
std::cout << "Input array size: ";
std::cin >> array; 
int res = 0;
int arr[array];
int min = arr[0];
for(int i = 0; i < array; i++ ){
	std::cout << "Input array num: " << std::endl;
	std::cin >> arr[i];
	std::cout << "arr: " << i << " = " << arr[i] << std::endl;
	res = res + arr[i];
	if(arr[i] < min){
	min = arr[i];
}
}
std::cout << "Result: " <<  res << std::endl;
std::cout << "Min: " << min << std::endl;
}

*/ 

//Two-Dimensional Arrays

int main(){
int arr[3][2];
for(int i = 0; i < 3; i++){
	for(int j = 0; j < 2; j++){
		std::cout << "Input array value: " ;
		std::cin>>arr[i][j];
}
}
for(int a =0; a < 3; a++){
	for(int b = 0; b < 2; b++)
		std::cout << "Array value "<< a << " " << b << ": "<< arr[a][b] << std::endl;
}
}
// Dynamic array
int main(){

int* Parr = new int[3][2];//[2]
for(int i = 0; i < 3; i++){
//	for(int j = 0; j < 2; j++){
		std::cout << "Input array value: " ;
		std::cin>>Parr[i];//[j]
//}
}
for(int a =0; a < 3; a++){
	for(int b = 0; b < 2; b++)
		std::cout << "Array value "<< a << b<<": " << Parr[a][b] << std::endl;
//}
}
delete[] Parr;

}
