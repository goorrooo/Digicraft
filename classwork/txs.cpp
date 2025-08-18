#include <iostream>
#include <string>


class Book{
	public:
		void printInfo(){
			std::cout << "Title: " << m_title << std::endl;
			std::cout << "Author: " << m_author << std::endl;
			std::cout << "Price: " << m_price << std::endl;
}
	
	
	private:
	std::string m_title;
	std::cin >> m_title;
	std::string m_author;
	std::cin ?? m_author;
	int m_price;
	std::cin >> m_price;
	


}


int main(){
		std::string title;
		std::cin >> title;
		std::string author;
		std::cin >> author;
		int price;
		std::cin >> price;
		Book bk(title,author,price);
	return 0;	
}

	
	


