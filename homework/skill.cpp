#include <iostream>
#include <string>

class Vector{
public:
	Vector() :  size(0), capacity(0), arr(nullptr){};	
	~Vector(){
		delete[] arr;
	};
public:
	void pushBack(int e){
	if(size == capacity){
		resize();
	}
		arr[size++] = e;
	};
	void popBack(){
		if(size> 0)size--; 
	};
	int retSize(){return size;}
	int retCap(){return capacity;}
	void vecClear(){
		size = 0;
	}	
	 int add(){
		int num = 0;
		for(int i = 0; i < size; i++){
			num = arr[i];
	}	
			return num;
	};
private:
	int size;
	int capacity;
	int* arr;
    void resize(){ 
		if(capacity == 0){
			capacity = 1;
} else if (size == capacity){
		capacity *= 2;
	}
		int* narr = new int[capacity];
		for(int i = 0;  i < size; i++){
		narr[i] = arr[i];
	}
	delete[] arr;
	arr = narr;
	}
};

	
int main(){
	Vector* vc = new Vector();
		vc->pushBack(21); 
		vc->pushBack(33); 
	std::cout << vc->add() << std::endl; 
delete vc;			
	return 0;	
}

