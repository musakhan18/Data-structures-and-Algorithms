#include <iostream>
#include"L_LIst.h"
using namespace std;
int main()
{
	L_List* obj = new L_List();

	//task1
	obj->insertSorted(10);
	obj->insertSorted(19);
	obj->insertSorted(11);
	obj->display();

	//task2
	L_List* obj2 = new L_List();
	obj2->Add_On_Head(12);
	node* temp = obj2->getHead();
	obj->insert_node_sort(temp);
	obj->display();

	//task3
	obj->remove_from_end(obj->getHead());

	//task4
	obj->display();
}
