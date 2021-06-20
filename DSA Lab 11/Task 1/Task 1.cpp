#include<iostream>
#include"L_List.h"
using namespace std;
int main()
{
	L_List* obj=new L_List();
	obj->Add_On_Head(1);
	obj->Add_On_Head(2);
	obj->Add_On_Head(3);
	obj->Add_On_Head(4);
	obj->Add_On_Head(5);
	obj->display();
	obj->Reverse(obj->gethead());
}