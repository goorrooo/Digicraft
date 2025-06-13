#include <iostream>

/*
------------------------------------------------------------
int main(){                                                -
	int arr[] = {1,2,3}                                    -
	int size = sizeof(arr) / sizeof(arr[0]);               -
	std::cout << size << std::endl;                        -
	return 0;                                              -
                                                           -
}                                                          -
------------------------------------------------------------


int main(){
	int  arr[3][3] = {
						{1,2,3},
						{4,5,6},
						{7,8,9}
						};

	for(int i = 0; i < 3; i++){
	for(int j = 0; j < 3; j++){
		std::cout << arr [i][j] << std::endl;	
};
};
};

*/
//------------- array in heap ------------------------------------- 

//	int* arr = new int[3]; // 
//	int** arr = new int[3][2]; // array in heap - erkchap

//----------------------- char array -------------------------------

//  char text[] = {'B','a','r','e','v', '\o'}; 
//  char text[] = "Barev";

int main(){
	int* arr = new int[5];
	for(int i = 0; i < 5; i++){	
	std::cin >> *(arr + i);
};	
	for(int j = 1; j < 5; j++){
	std::cout << *(arr + j) << std::endl;
}
return 0;

};












