#pragma once
#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node* leftChild;
	Node* rightChild;
	char colour;

};

class RBT
{
private:
	Node* root;
	int c = 0;
	
	void inorderTraversalCode(Node* temp);
	int leaf(Node*);
	int max(Node*);

public:
	void RBTinsertionCode(Node* ,int);
	void rightsinglerotate(Node* n_node);
	void leftsinglerotate(Node* n_node);
	void RBTinsertion(int num)
	{
		Node* temp = root;
		RBTinsertionCode(temp, num);
		
	}
	RBT()
	{
		root = nullptr;
	}
	int count();
	int height();
	void LeftdoubleRotation(Node*);
	void RighttdoubleRotation(Node*);
	bool is_empty();
	void inorderTraversal();
	void preorder();
	void postorder();
	void inorder();
	Node* FindParent(int);
	Node* FindUncle(int);
	Node* FindGrandParent(int);
	Node* check(Node*);
	void pre_order(Node*);
	void post_order(Node*);
	void in_order(Node*);
};

