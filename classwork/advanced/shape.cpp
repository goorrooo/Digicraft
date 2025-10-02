#include <iostream>
#include <memory>
class Shape{
private: 
	virtual void area(){}
};

class Circle{
private:
	void area()  {
	std::cout << "Circle" << std::endl;
}
};
class Rectangle{
private:
	void area()  {
	std::cout << "Rectangle" << std::endl;
}
};

class ShapeFactory{
	public:
		static std::unique_ptr<Shape> createShape(const std::string& shape){
			if(shape == "Shrjan"){
				return std::make_unique<Circle>();
			}
			if(shape == "Uxankyun"){
				return std::make_unique<Rectangle>();
			}
	return nullptr;
	}

};

int main(){

	return 0;
};
