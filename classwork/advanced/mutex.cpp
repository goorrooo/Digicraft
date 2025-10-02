#include <iostream>
#include <iostream>
#include <thread>
#include <mutex>
#include <queue>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
std::queue<int> container;
int size = 5;
void producer(){
	for(int i = 0; i < 10; i++){
		std::unique_lock<std::mutex> lock(mtx); 
		cv.wait(lock, [] {return container.size() < size;});
		std::cout << "Adding: " << i << std::endl;
		container.push(i);
		cv.notify_all();
}
}

void consumer(){
	for(int i = 0; i < 10; i++){
		std::unique_lock<std::mutex> lock(mtx); 
		cv.wait(lock, [] {return !container.empty();});
		container.pop();
		std::cout << "Consuming: " << i << std::endl;
		cv.notify_all();
}
}

int main(){
	std::thread t1(producer);
	std::thread t2(consumer);
	t1.join();
	t2.join();
	return 0;
}



