#include <iostream>
#include <memory>


class Person{
public:
	Person(){
	std::cout << "Constructor" << std::endl;
}	
	~Person(){
	std::cout << "Destructor" << std::endl;
}
};

int main(){
	std::cout << "--------Unique Pointer---------" <<	std::endl;
{	 std::unique_ptr  uPtr = std::make_unique<Person>();
		{
	auto ptr = std::make_unique<Person>();
		}
}
	std::cout << "--------Shared Pointer---------" <<	std::endl;

{	 std::shared_ptr<Person> ptr = std::make_shared<Person>();
	 auto p1 = ptr;
	{
	auto p2 = p1;		
	}
	std::cout << ptr.use_count() << std::endl;
}
	return 0;
}
