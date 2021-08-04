#include"My_clist.h"
#include<iostream>
using namespace std;
int main()
{
	My_clist * obj = new My_clist();
	cout << "Linked List" << endl;
	cout << "------------" << endl;
	obj->add_node_tail(7);
	obj->add_node_tail(23);
	obj->add_node_tail(9);
	obj->add_node_tail(1);
	obj->add_node_tail(67);
	obj->add_node_tail(74);
	obj->display();
	cout << "\nAfter Rearranging" << endl;
	cout << "------------------" << endl;
	obj->gradedTask();
}