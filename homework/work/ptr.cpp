#include <iostream>
#include <string>



/*
int main(){
	int num = 10;
	int* ptr = &num;
	//int* ptr = nullptr; ete  tvac chi arjeq
	std::cout << "Address num in ptr  :" << ptr << std::endl;
	std::cout << "Address num in &num :" << &num << std::endl;
	std::cout << "Address ptr in &ptr :"<< &ptr << std::endl;
	std::cout << "Value num in *ptr   :" <<*ptr << std::endl;
		

	return 0;
}
*/
void minimal(int* arr, int length);

int main(){
	int arr[2] = {1,2};
	minimal(arr,2);
	return 0;
}

void minimal(int* arr, int length){
	int min = 0;	
	for( int i = 0; i < length; i++){
	if(*(arr + i) < min){
		 min = *(arr + i);
	} 
	}
	std::cout << min << std::endl;
}
