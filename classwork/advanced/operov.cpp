#include <iostream>

class Myint{
public:
	Myint(){}
	Myint(const int value){};
	Myint(const Myint& a){
		this->value = a.value;
	
		
}
public:
Myint operator+(const Myint& a){
		Myint ret;
		ret.value = this->value + a.value;
		return ret;
	}

Myint operator-(const Myint& a){
		Myint ret;
		ret.value = this->value - a.value;
		return ret;
	}

Myint operator*(const Myint& a){
		Myint ret;
		ret.value = this->value * a.value;
		return ret;
	}
Myint operator=(const Myint& a){
	this->value = a.value;
	return *this;
}
Myint operator/(const Myint& a){
		Myint ret;
		ret.value = this->value / a.value;
		return ret;
	}
bool operator>(const Myint& a){
	 	bool ret = false;
		if(this->value > a.value)
			{	ret = true;
				}
			return ret;
	}
bool  operator<(const Myint& a){
	 	bool ret = false;
		if(this->value < a.value)
			{	ret = true;
				}
			return ret;
	}
bool operator!=(const Myint& a){
	 	bool ret = false;
		if(this->value != a.value)
			{	ret = true;
				}
			return ret;
	}
public:
	int value;

};


int main(){
	Myint a;
	a.value = 10;
	Myint b(a);
	std::cout <<b.value << std::endl;
	Myint c(a + b);	
	std::cout <<c.value << std::endl;
	c = a * b;
	std::cout <<c.value << std::endl;
	c  = a / b;
	std::cout <<c.value << std::endl;
	c = a - b;
	std::cout <<c.value << std::endl;
	bool result  = b > c; 
	std::cout << result  << std::endl;
	return 0;
};






