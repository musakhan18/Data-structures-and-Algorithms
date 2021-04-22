#include"myList.h"
#include<iostream>
using namespace std;
int main()
{
	myList* obj = new myList();
	cout << "Adding elements" << endl;
	obj->add_node_tail(20);
	obj->add_node_tail(25);
	obj->add_node_head(18);
	obj->add_node_head(18);
	obj->add_node_tail(26);
	obj->display();
	int num;
	cout << "\nEnter num to search: "; cin >> num;
	cout << num << " found " << obj->Search(num) << " times" << endl << endl;
	obj->duplicate();
	obj->display();
}