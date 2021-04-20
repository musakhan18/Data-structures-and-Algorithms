#include<iostream>
#include"List.h"
#include"MyList.h"
using namespace std;

void display(MyList&);

int main()
{
	MyList obj(5);
	cout << "Adding elements in the list" << endl;
	cout << "----------------------------" << endl;
	obj.AddElement(3);
	obj.AddElement(8);
	obj.AddElement(1);
	obj.AddElement(4);
	obj.AddElement(7);
	
	display(obj);

	cout << "Last elemet of the List is: " << obj.last() << endl << endl;;

	cout << "Removing elements from the list" << endl;
	cout << "--------------------------------" << endl << endl;
	obj.RemoveElement();
	obj.RemoveElement();
	obj.RemoveElement();
	obj.RemoveElement();

	cout << "Current number of element present in list: " << obj.size() << endl << endl;
	display(obj);
}

void display(MyList& obj)
{
	int* temp = obj.Getarr();
	bool flag = obj.IsEmpty();
	if (!flag)
	{
		cout << "My List"<<endl;
		cout << "--------" << endl;
		for (int i = 0; i < obj.size(); i++)
		{

			cout << temp[i] << endl;
		}
		cout << endl;
	}
}