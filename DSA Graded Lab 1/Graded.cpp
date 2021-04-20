#include<iostream>
#include"myArray.h"
using namespace std;
int main()
{
	int choice;
	myArray obj(5);
	int s, index = 0;
	bool flag = 0;

	do
	{
		cout << "Press 1 for Insertion" << endl;;
		cout << "Press 2 for Deletion from right" << endl;
		cout << "Press 3 for Deletion from left" << endl;
		cout << "Press 4 to display data" << endl;
		cout << "Press 5 to search an element" << endl;
		cout << "Press 0 to exit" << endl;
		cin >> choice;
		if (choice == 1)
		{
			cout << "Enter element to add: "; cin >> s;
			bool f=obj.insert(s);
			if (f == 1)
			{
				cout << "added succfuly" << endl;
			}
			else
			{
				cout << "full" << endl;
			}
		}
		if (choice == 2)
		{
			bool f = obj.delete_right();
			if (f == 1)
			{
				cout << "delete succfuly" << endl;
			}
			else
			{
				cout << "empty" << endl;
			}
		}
		if (choice == 3)
		{
			bool f = obj.delete_left();
			if (f == 1)
			{
				cout << "delete succfuly" << endl;
			}
			else
			{
				cout << "empty" << endl;
			}
		}
		if (choice == 4)
		{
			obj.display();
		}
		if (choice == 5)
		{
			cout << "Enter element to search: "; cin >> s;
			obj.search(s, index);
			cout << index;
		}
		if (choice == 0)
		{
			flag = 1;
		}
	} while (flag != 1);
}