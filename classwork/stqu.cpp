#include <iostream>
#include <string>
class StackList{
protected:
	struct Node{
		Node(int val) : value(val), next(nullptr){};	
		int value;
		Node* next;
	};		
public:
	StackList(): head(nullptr), size(0){}
	~StackList(){
		while(head){
		Node* tmp = head;
		head = head->next;
		delete tmp;
	}
	}
public:
 void push_back(int val){
		Node* newNode = new Node(val);
		if(!head){
			head = newNode;
	}else {
		Node* curr = head;
		while (curr->next){
		curr = curr->next;
	}
		curr->next = newNode;
		Node* topNode = curr;
	}
	size++;
	}
void pop_back(){
		if(!head){	
		std::cout << "No Node" << std::endl;
		return;
	}	
		if(!head->next){
			delete head;
			head = nullptr;
	}
		else{
		Node* curr = head;
		while(curr->next){
		curr = curr->next;	
	}
		delete curr->next;
		curr->next = nullptr;
	}
	size--;
	}
	Node getNode(){
		Node* curr = head;
		int top;
		if(!head){
		std::cout << "No Node" << std::endl;
	} else{
		while(curr->next){
		curr = curr->next;
	}
	return *curr;
}

};
	
private:
	Node* head;
	int size;
		
	};
int main(){
	StackList* newNode = new StackList();
	newNode->push_back(10);
	std::cout << newNode->getNode() std::endl;
			
};
