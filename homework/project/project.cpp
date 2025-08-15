#include <iostream>
#include <string>
#include <vector>
struct History{
	int bookId;
	std::string action;
	std::string  date;
};
class Book{

private:
	int id;
	std::string name;
	std::string author;
	std::string genre;
	int total;
	int books;
public:
	Book(int id, std::string title, std::string autname, std::string genre, int total, int books) : id(id), name(title), author(autname), genre(genre), total(total), books(books) 
	{};
public:
	void showBook () const{
		std::cout << "ID: " << id << std::endl; 
		std::cout << "Title: " << name << std::endl; 
		std::cout << "Author: " << author << std::endl; 
		std::cout << "Genre: " << genre << std::endl; 
		std::cout << "Total: " << total << std::endl; 
		std::cout << "Available: " << books << std::endl; 
		
	}
	
	
bool takeBook(){
	if(books > 0){
		books--;
		return true;
	}
	return false;
	
	}			
void retBook(){
		if(books < total){
			books++;
	}else{
		std::cout << "You didn't take the book" << std::endl;
		
	}	
}
int getId() const {return id;}	
std::string retTitle() const{
		return name;
	}
int getBooks() const {return books;}
std::string getAuthor() const {return author;}	
};
	
class User{
private:
	std::string log;
	std::string pass;
	int borrBId[3];
	int borrDate[3];
public:
	User(std::string uname,std::string pas) : log(uname),pass(pas){
	for(int i = 0; i<3; i++){
		borrBId[i] = 0;
		borrDate[i] = 0;
	}
	}
public:
	std::vector<History> history;
	bool regUser(std::vector<User>& users,std::string& log, std::string& pass){
	for(auto& u : users){
		if(u.log==log){	
	std::cout << "Unknown" << std::endl;
	return false;
	}
	}
	users.emplace_back(log,pass);
	std::cout << "Succsessful!" << std::endl;
	return true; 
}	
	bool login(const std::string& uname, const std::string& pas) const{
			return (log == uname && pass == pas);
	}

bool borrowBook(std::vector<Book>& book, int bookId){
	for(Book& b : book){
		if(b.getId() == bookId){
	if(b.getBooks() > 0){
	for(int i = 0; i < 3; i++){
	if(borrBId[i] == 0){
		borrBId[i] = bookId;
		b.takeBook();
		std::cout << "Input date d/m/y" << std::endl;
		std::string date;
		std::cin >> date;
		std::cout << "Borrowed" << std::endl;
		history.push_back({bookId,"Borrowed", date});
	return true;
	}
}
	std::cout << "You already borrowed 3 books!" << std::endl;
	return false;
		}
	else{
		std::cout << "No copies available!" << std::endl;
		return false;
	}
	}
}//for loop scope
	
	std::cout << "Book with this ID not found" << std::endl;
	return false;	
}// function scope
bool returnBook(std::vector<Book>& book, int bookId){
	for(int i = 0; i < 3; i++){
		if(borrBId[i] == bookId){
		for(Book& b : book){
		if(b.getId() == bookId){
		b.retBook();
		borrBId[i] = 0;
		std::cout << "Input date d/m/y" << std::endl;
		std::string date;
		std::cin >> date;
		history.push_back({bookId,"Returned", date});
		std::cout << "Book returned!" << std::endl;
		return true;
			}
		}
	}
}
	std::cout << "You didn`t borrow this book!" << std::endl;
	return false;	
}

void showHistory() const {
	if(history.empty()){
		std::cout << "No history for this user" << std::endl;
		return;
	}
	std::cout << "History for " << log << ": " << std::endl;
	for(const History& h : history){
		std::cout << "Book ID: " << h.bookId << std::endl;
		std::cout << "Action: " << h.action <<  std::endl;
		std::cout << "Date: " << h.date <<  std::endl;
	}
}	
std::string getLogin() const { return log;}
};

void showAllBooks(const std::vector<Book>& book);
void searchBooks(const std::vector<Book>& book);

class Admin{
private:
	std::string log;
	std::string pass;
public:		
	Admin(const std::string& uname,const std::string& pas) : log(uname),pass(pas){}
public:
	bool login(const std::string& uname, const std::string& pas) const{
	return log == uname && pass == pas;
}
void addBook(std::vector<Book>& book){
	int id, total;
	std::string name, author, genre;
	std::cout << "Input ID: " << std::endl;
	std::cin >> id;
	for(const Book& b : book){	
	if(b.getId() == id){
	std::cout << "Book with this ID already exists!" << std::endl;
	return;
	}	
}
	std::cout << "Input Title: " << std::endl;
	std::cin >> name;
	std::cout << "Input Author: " << std::endl;
	std::cin >> author;
	std::cout << "Input Genre: " << std::endl;
	std::cin >> genre;
	std::cout << "Input Total Copies: " << std::endl;
	std::cin >> total;
	if(total <= 0){
	std::cout << "Total copies must be a positive number!" << std::endl;	
	}
	book.push_back(Book(id,name,author,genre,total,total));
	std::cout << "Book added!" << std::endl;
	}
void ShowAllUsers(const std::vector<User>& users)const{
	std::cout << "All users:\n" << std::endl;
	for(const User& u: users){
	std::cout << "- " << u.getLogin() << "\n" << std::endl;
	}

}
void adminMenu(std::vector<Book>& book,std::vector<User>& users){
	int ch;
	while(true){
	std::cout <<"1.Add Book\n2.Show Users\n3.Show Books\n4.Exit" << std::endl;
	std::cin >> ch;
	switch(ch){
		case 1:{
		addBook(book);
		break;	
	}	
		case 2:{
		ShowAllUsers(users);
		break;	
	}	
		case 3:{
		::showAllBooks(book);
		break;
	}	
		case 4:{
		std::cout <<"Exit Admin Menu"<< std::endl;
		return;
	}	
		default: std::cout<< "Invalid Option"	<< std::endl;
	}	
	}


}
};
	bool auth(std::vector<User>& users, std::string& uname, std::string& pas){
		for(const User& u : users){
		if(u.login(uname,pas)){
			std::cout <<"Successfuly!" <<  std::endl;
		return true;	
	}
	}
			std::cout << "False "<< std::endl;
			return false; 
	}




int main(){

	std::vector<Book>book;
	std::vector<User>users;
	Admin admin("Goro","1234");
	int ch;
	std::string currentUser;
	std::string currentPass;
	bool logged = false;
	while(true){
	std::cout << "1.Registration\n2.Login\n3.Show\n4.Borrow Book\n5.Return Book\n6.Search\n7.My History\n8.Exit\n" << std::endl;
	std::cout << "Choose an option: " << std::endl; 
	std::cin >> ch;
	switch(ch){
		case 1: {std::string log, pass;
			   std::cout << "Input Login: " << std::endl;
				std::cin >> log;
			   std::cout << "Input Password: " << std::endl;
				std::cin >> pass;
				User tmp("","");
				tmp.regUser(users,log,pass);
				break;}
		case 2: {std::string log, pass;
			   std::cout << "Input Login: " << std::endl;
				std::cin >> log;
			   std::cout << "Input Password: " << std::endl;
				std::cin >> pass;
				if(admin.login(log,pass)){
				std::cout << "Admin logged! " << std::endl;
				admin.adminMenu(book,users);
	}
				else if(auth(users,log,pass)){
				logged = true;
				currentUser = log;
				currentPass = pass;
	}
				break;}
		case 3: {if(!logged){	
				std::cout << "You must log in first!" << std::endl;
				break;}
				else{
				showAllBooks(book);
				break;
}
			}	
		
		case 4: {
			if(!logged){
		std::cout << "You must log in first!" << std::endl;
		break;
	}
	int bookId;
	std::cout << "Input Book ID: " << std::endl;
	std::cin >> bookId;
	for(User& u : users){
		if(u.login(currentUser, currentPass)){
		u.borrowBook(book,bookId);
		break;
	}
	}// For Loop scope
	break;
	}
	case 5:{
	if(!logged){
		std::cout <<"You must log in first!" << std::endl;
		break;
	}
	int bookId;
	std::cout << "Input Book ID to return" << std::endl;
	std::cin >> bookId;
	for(User& u : users){
		if(u.login(currentUser,currentPass)){	
		u.returnBook(book,bookId);
		break;
	}
	}
	break;
	}
	case 6: {
		if(!logged){
		std::cout << "You must log in first!" << std::endl;
		break;
	}
	searchBooks(book);
	break;
	}
	case 7: {
			if(!logged){
			std::cout << "You must log in first!" << std::endl;
			break;
			}for(User& u : users){
				if(u.login(currentUser,currentPass)){
				u.showHistory();
				break;	
			}
			}
			break;
			}
	case 8 : {
				std::cout << "Exiting programm"<< std::endl;
				return 0; }
        default: 
			std::cout << "invalid option " << std::endl;
		}};
			
	return 0;
}

void showAllBooks(const std::vector<Book>& book){
	if(book.empty()){
	std::cout << "No book"<< std::endl;	
	return;
}	for(const Book& b : book){
		b.showBook();
	std::cout << "-----------------------------------" << std::endl;
	}

}


void searchBooks(const std::vector<Book>& book){
	if(book.empty()){
	std::cout << "No Book available" << std::endl;	
	return;
}
	int option;
	std::cout <<"Search by:\n1.Title\n2.Author" << std::endl;
	std::cin >> option;
	std::string query;
	if(option == 1){
	std::cout <<"Input Title: "<< std::endl;
	std::cin >> query;
	for(const Book& b : book){
		if(b.retTitle() == query){
		b.showBook();
		std::cout << "-------------" << std::endl;
	}
	}

}else if(option == 2){
	std::cout << "Input Author: " << std::endl;
	std::cin >> query;
	for(const Book& b : book){
	if(b.getAuthor() == query){
	b.showBook();
	std::cout << "---------------" << std::endl;

}

}
}else{
	std::cout << "Invalid option!" << std::endl;
}
	}












