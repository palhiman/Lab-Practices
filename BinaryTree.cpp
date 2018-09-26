#include<iostream>
#include<stdlib.h>

using namespace std;

class Node{
	Node *right,*left;
	int data;
}

class BinaryTree{

	public:
		Node *root;
		
	BinaryTree(){
		root = NULL;
	}

	node* createNode(){
		Node *temp = new Node;
		
		cout<<"\nEnter new element: ";
		cin>>temp->data;
			
	}

}
