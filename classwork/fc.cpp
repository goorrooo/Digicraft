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
*/


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
















