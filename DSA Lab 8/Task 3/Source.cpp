#include"MyDlist.h"
#include<iostream>
using namespace std;

int main()
{
	MyDlist* obj = new MyDlist();
	obj->add_node_tail(2);
	obj->add_node_tail(1);
	obj->add_node_tail(5);
	obj->add_node_tail(3);
	obj->add_node_tail(4);
	
	cout << "Linked List" << endl;
	cout << "------------" << endl;
	obj->display();

	obj->reverse();
	cout << "Reversed Linked List" << endl;
	cout << "---------------------" << endl;
	obj->display();

	cout << "After Swapping Head Value with Tail Value" << endl;
	cout << "------------------------------------------" << endl;
	obj->swapHeadTail();
	obj->display();

	cout << "Total Sum of Linked List: " << obj->getTotal() << endl << endl;

	cout << "Linked List" << endl;
	cout << "------------" << endl;
	obj->display();
}