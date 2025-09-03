#include <iostream>
#include <string>
#include <vector>

/* 
class Matrx{
public: 
	Matrx(int row, int el) : m_row(row), m_elm(el){
		arr = new int*[m_elm];
		for(int i = 0; i < m_elm; i++){
			arr[i] = new int[m_elm];
			for(int j = 0; j < m_row; j++){
			arr[i][j] = 0;
	}
	}
		
	};	
	~Matrx(){
	}
public:
	void setData(int x, int y, int value){
			if(x > 0 && x < m_row && y > 0 && y < m_elm){
			arr[x-1][y-1] = value;
				}
	}
	int getData(int x, int y){
			if(x > 0 && x < m_row && y > 0 && y < m_elm){
					return arr[x][y];
						}
						return 0;
						}
	Matrx  add(const Matrx& mx1){
			Matrix res(m_elm,m_row);	
			for(int i = 0; i < m_elm; i++){
				for(int j = 0; j < m_row; j++)
	
	}	
	}	
		
	
private:
	int** arr;
	int  m_row;
	int  m_elm;
};
*/


void swap(int& a, int& b){
	int tmp = a;
	a = b;
	b = a;
	}	
	

void BubbleSort(std::vector<int>& arr){
	bool swapped = false;
	int size = arr.size();
for(int i = 0; i < size-1; i++){
	for(int j = 0; j < size-1-i; j++){
		if(arr[j] > arr[j+1]){
		swap(arr[j],arr[j+1]);
		swapped = true;
}	
}
	if(swapped){break;}
}
}
int main(){	
	std::vector<int> vec = {5,6,1,2};
	BubbleSort(vec);
	for(int a : vec){
		std::cout << a << "" << std::endl;}
	return 0;	
}

