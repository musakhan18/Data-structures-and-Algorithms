#include"myList.h"
#include<iostream>
using namespace std;
int main()
{
	myList *obj = new myList();
	cout << "Adding elements" << endl;
	obj->add_node_tail(20);
	obj->add_node_tail(25);
	obj->add_node_head(19);
    obj->add_node_head(18);
	obj->add_node_tail(26);
	obj->display();
	cout <<"\nfront: "<<obj->front() << endl;
	cout << "back: " << obj->back() << endl;
	cout << "\nRemoving elements" << endl;
	obj->remove_from_tail();
	obj->remove_from_tail();
	obj->display();
	cout << "\nfront: " << obj->front() << endl;
	cout << "back: " << obj->back() << endl;
}