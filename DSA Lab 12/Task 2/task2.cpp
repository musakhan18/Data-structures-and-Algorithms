#include<iostream>
#include"BST.h"
using namespace std;
int main()
{
	BST* obj = new BST();

	obj->insert(60);
	obj->insert(50);
	obj->insert(70);
	obj->insert(30);
	obj->insert(53);
	obj->insert(35);
	obj->insert(57);
	obj->insert(32);
	obj->insert(40);
	obj->insert(45);
	obj->insert(80);
	obj->insert(75);
	obj->insert(77);

	cout << "Pre Order Traversal" << endl;
	cout << "--------------------" << endl;
	obj->preorder();
	cout << endl;
	cout << "Post Order Traversal" << endl;
	cout << "---------------------" << endl;
	obj->postorder();
	cout << endl;
	cout << "In Order Traversal" << endl;
	cout << "-------------------" << endl;
	obj->inorder();
	cout << endl;	
}
	