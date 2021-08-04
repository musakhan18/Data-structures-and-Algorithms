#include<iostream>
#include"BST.h"
using namespace std;
int main()
{
	BST* obj = new BST();
	obj->insert(5);
	obj->insert(3);
	obj->insert(6);
	obj->insert(2);
	obj->insert(4);
	cout << "Binary Tree" << endl;
	cout << "------------" << endl;
	obj->inorder();
	cout << endl;

	cout << "Mirror Binary Tree" << endl;
	cout << "-------------------" << endl;
	obj->m_tree();
	obj->inorder();
	cout << endl;
}
	