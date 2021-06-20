#include<iostream>
#include"BST.h"
using namespace std;
int main()
{
	BST* obj = new BST();
	node* root = nullptr;
	
	root = obj->insert(root, 6);
	obj->insert(root, 4);
	obj->insert(root, 7);
	obj->insert(root, 8);
	obj->insert(root, 1);

	cout << "Printing Inorder Travasal" << endl;
	obj->inorder();
}