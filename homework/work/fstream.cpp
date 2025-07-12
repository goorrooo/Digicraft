#include <iostream>
#include <string>
#include <fstream>

int main(){
	//grel urish file i mej
/*	std::ofstream fst("test.txt", std::ios_base::out);
	if(fst.is_open()){
		fst << "Haylo aper";
		fst.close();
	}*/
	// kardal urish file ic 
	std::ifstream fst("test.txt");
	if(fst.is_open()){
	char tmp[100];
	//fst >> tmp; menak arajin barna kardalu
	fst.getline(tmp,100); // arajin 100 simvoly
	std::cout << tmp;
	fst.close();}
	return 0;

}
