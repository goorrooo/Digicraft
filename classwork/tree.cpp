#include <iostream>


class Tree{
public:
	Tree() {};

public:
	void insert(int val){
		root = recursive(root,val);
		}
	
	void coutPre(root,val){
		if(root == nullptr)
			std::cout << recursive(root,val) << std::endl;	
	}		

// Struct
private:
struct Node{
public:
	Node(int val) : value(val), left(nullptr), right(nullptr){};
	int value;
	Node* left;
	Node* right;	
};

private:
	Node* root;
	Node* recursive(Node* node, int val){
				if(node == nullptr){
			return new Node(val);
	}if(val < node->value){	
		node->left = recursive(node->left,val);
	} else{	
		node->right = recursive(node->right,val);
		}
	return node;
}

};
// Member
int main(){
	
	return 0;	
};
