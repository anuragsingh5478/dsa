#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* left;
	Node* right;
	Node(int val){
		data = val;
		left = right = NULL;
	}
};

// Print inorder
void printInorder(Node* root){
	if(root != NULL){
		printInorder(root->left);
		cout << root->data << " ";
		printInorder(root->right);
	}
}

// Print Preorder
void printPreorder(Node* root){
	if(root){
		cout << root->data << " ";
		printPreorder(root->left);
		printPreorder(root->right);
	}
}

void printPostorder(Node *root){
	if(root){
		printPostorder(root->left);
		printPostorder(root->right);
		cout << root->data << " ";
	}
}
int main(){
	Node *root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	
	cout << "Inorder Traversal: ";
	printInorder(root);
	
	cout << endl;
	
	cout << "Preorder Traversal: ";
	printPreorder(root);
	
	cout << endl;
	
	cout << "Postorder Traversal: ";
	printPostorder(root);
	
	cout << endl;
	
	
	return 0;
}

/*
		1
	  /   \
	2		3
  /   \
 4     5
 
*/
