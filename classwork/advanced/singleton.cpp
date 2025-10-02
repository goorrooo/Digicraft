#include <iostream>

class  Singleton {
private:
	static Singleton* obj;
private:
	Singleton()  {}
	~Singleton() {}

public:
	static Singleton* getInstance(){
		if(nullptr == obj){
		obj = new Singleton();
}
		return obj;
}
};

Singleton* Singleton::obj = nullptr;

int main(){

	Singleton* s1 = Singleton::getInstance();
	return 0;
}
