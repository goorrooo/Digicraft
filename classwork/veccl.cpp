#include <iostream>
#include <string>

class Vector{
public:
	Vector(int capacity, int size){
		this->capacity = capacity;
		this->size = size;
	}
public:
	int pushBack(){
		if(capacity < 1){
		capacity = 1;
		return capacity;
	}else
		return capacity * 2;
	}		
	int popBack(){
			size -= 1;
			return size;	
	}	
	int retSize(){
		return size;
	}		
	int retCap(){
		return capacity;
	}
	int clearArr(){
		size = 0;
		return size;
	}
private:
	int size;
	int capacity;	
};



int main(){
	
	Vector* vec = new Vector(1,0);
	std::cout << vec->pushBack() << std::endl;
	return 0;
	}
