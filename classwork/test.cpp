#include <iostream>
#include <string>



					// factorial
/*
int main(){
  int n = 6;
int res = 1;
	for(int j = 6; j !=1; j--){
		res = res * j;
		std::cout << res << std::endl;
}
	return 0;
}
 */
void max(int n);

int main(){
	int arr[5];
	for(int i = 0; i != 5; i++){
		std::cin >> arr[i];
	}
	int max = arr[0];
	for(int j = 0; j < 5; j++){
		if(arr[j] > max){
		max = arr[j];
	}
}

std::cout << max << std::endl;
return 0;
}

