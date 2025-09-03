#include <iostream>

template <typename T>
class MyType{
public:
	MyType(T a, T b) : l(a), r(b){}
	
T getMax(){
	T max;
	if(l > r){
	max = l;
	} 
	else {
	max = r;
	}
		return max;
}
T getMin(){
	T min;
	if(l > r){
	min = r;
	} 
	else {
	min = l;
	}
		return min;
}


public:
 T l;
 T r;

};
int main(){
	MyType<int> mytype(1,3);
	std::cout << mytype.getMin() << std::endl;	
	return 0;
}

/*
class Var{

public:
T getValue(){
	return value;
}
public:
T value;
};


int main(){
	Var<int> MyVar;
	MyVar.value = 8;
	std::cout << MyVar.getValue() <<  std::endl;	
	return 0;
};

*/
