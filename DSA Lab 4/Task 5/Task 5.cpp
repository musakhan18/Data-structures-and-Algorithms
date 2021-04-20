#include<iostream>
#include"myStack.h"
using namespace std;
int main()
{
	myStack obj(5);
	obj.AddElement(4);
	obj.AddElement(5);
	obj.AddElement(1);
	obj.AddElement(8);
	obj.AddElement(9);
	cout << "Stack before sorting" << endl;
	obj.display();
	cout << endl;
	obj.sort();
	cout << "Stack after sorting" << endl;
	obj.display();
}