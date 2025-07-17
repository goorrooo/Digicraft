#include <iostream>
#include <string>

template <typename t>
void print_arr(t* arr, int len);


int main(){
	int arr[4] = {1,2,3,4};
	char Carr[3] = {'1','2','3'};
	print_arr(Carr,3);	
	return 0;
}
template <typename t>
void print_arr(t* arr, int len){
	for(int i = 0; i < len; i++){
		std::cout << *(arr + i) << std::endl;	
		}
};
