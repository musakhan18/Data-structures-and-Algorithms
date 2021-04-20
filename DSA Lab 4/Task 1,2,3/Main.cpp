#include<iostream>
#include"Stack.h"
using namespace std;
template<class T>
void display(Stack<T>& obj);
int main()
{
	Stack<int> obj;
	obj.AddElement(6);
	obj.AddElement(2);
	obj.AddElement(9);
	obj.AddElement(8);
	obj.AddElement(1);
	obj.AddElement(7);
	display(obj);
	cout << endl;
	cout << "Last Element: " << obj.last() << endl;

	obj.RemoveElement();
	obj.RemoveElement();

	cout << "After Removing Element" << endl << endl;
	display(obj);

	cout << "Now total elements present in list: " << obj.size() << endl;

	cout << "After Removing Element" << endl;;

	obj.RemoveElement();
	display(obj);
	obj.RemoveElement();
	display(obj);
	cout << "Now total elements present in Stack: " << obj.size() << endl;
}
template<class T>void display(Stack<T>& obj)
{
	int* temp = obj.getarr();
	cout << "stack" << endl;
	cout << "------" << endl;
	for (int i = 0; i < obj.size(); i++)
	{
		cout << temp[i] << " ";
	}
	cout << endl;
}