#include<iostream>
#include"L_List.h"
using namespace std;
int main()
{
	L_List* obj = new L_List();
	obj->Add_On_Tail(2);
	obj->Add_On_Tail(7);
	obj->Add_On_Tail(1);
	obj->Add_On_Tail(9);
	obj->Add_On_Tail(8);
	cout << "Count of elements: " << obj->count() << endl;
	obj->display();
	obj->Remove_On_Tail();
	cout << "Count of elements: " << obj->count() << endl;
	obj->display();
	obj->Add_On_Head(5);
	obj->Add_On_Head(6);
	cout << "Count of elements: " << obj->count() << endl;
	obj->display();
	obj->Remove_On_Head();
	cout << "Count of elements: " << obj->count() << endl;
	obj->display();
	obj->insertSorted(6);
	cout << "Count of elements: " << obj->count() << endl;
	obj->display();
	cout << "Tail: " << obj->getTail() << endl;
	cout << "Head: " << obj->getHead() << endl << endl;
	obj->insertAtPosition(2);
	cout << "Count of elements: " << obj->count() << endl;
	obj->display();
	obj->removeFromPosition(2);
	cout << "Count of elements: " << obj->count() << endl;
	obj->display();
	obj->remove(2, 5);
	cout << "Count of elements: " << obj->count() << endl;
	obj->display();
}