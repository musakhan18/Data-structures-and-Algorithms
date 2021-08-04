#include<iostream>
#include"BST.h"
using namespace std;
int main()
{
	BST* obj = new BST();
	obj->insert(40);
	obj->insert(60);
	obj->insert(55);
	obj->insert(30);
	obj->insert(35);
	obj->insert(25);
	obj->insert(24);
	obj->insert(28);
	obj->insert(32);
	obj->insert(36);
	obj->insert(31);
	obj->insert(33);
	obj->insert(65);
	obj->insert(63);
	obj->insert(66);
	obj->insert(61);
	obj->insert(23);
	
	obj->preorder();
	cout << endl;
	obj->deleteleaf(40);
	cout << endl;
	obj->preorder();
}