#include<iostream>
#include"LinkedList.h"
#include"myLL.h"
using namespace std;

int main()
{
	myLL<int> *obj=new myLL<int>();
	obj->insertAtEnd(1);
	obj->insertAtEnd(2);
	obj->insertAtEnd(3);
	obj->insertAtEnd(4);
	obj->insertAtEnd(5);
	obj->display();
	obj->deleteFromHead();
	obj->display();
}