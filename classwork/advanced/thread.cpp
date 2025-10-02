#include <iostream>
#include <thread>
void f(std::string& name){

	std::cout << name << std::endl;
}



int main(){
	std::string name = "GoR";
	std::thread t(f, std::ref(name));
	t.detach();
	if(t.joinable()){
		t.join();
	}
	return 0;
}
