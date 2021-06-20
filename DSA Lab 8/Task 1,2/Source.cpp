#include"MyDlist.h"
#include<iostream>
using namespace std;
int menu();
int main()
{
	MyDlist * obj = new MyDlist();
	int value;
	bool flag = 0;
	
	do
	{
		int s = menu();
		if (s == 1)
		{
			cout << "Enter Element to add in the list: "; cin >> value;
			obj->add_node_tail(value);
			cout << "Element added successfully!!" << endl << endl;
		}
		if (s == 2)
		{
			cout << "Enter Element to add in the list: "; cin >> value;
			obj->addnodeHead(value);
			cout << "Element added successfully!!" << endl << endl;
		}
		if (s == 3)
		{
			cout << "Enter Element to add in the list: "; cin >> value;
			int num = 0;
			cout << "Enter the Node after which you want to add Value: "; cin >> num;
			obj->add_node_aftervalue(value, num);
			cout << "Element added successfully!!" << endl << endl;
		}
		if (s == 4)
		{
			cout << "Enter element to delete: "; cin >> value;
			obj->remove_node(value);
			cout << "Element deleted successfully!!" << endl << endl;
		}
		if (s == 5)
		{
			cout << "Linked List" << endl;;
			cout << "------------" << endl;
			obj->display();
		}
		if (s == 6)
		{
			obj->sortascending();
		}
		if (s == 7)
		{
			obj->sortDescending();
		}
		if (s == 8)
		{
			cout << "Count: " << obj->count() << endl << endl;
		}
		if (s == 9)
		{
			cout << "Enter Element to Search: ";cin >> value;
			int num= obj->search(value);
			if (num==-1)
			{
				cout << "Element Not Found" << endl << endl;
			}
			else
			{
				cout << "Element Found at position " << num << endl << endl;
			}
		}
		if (s == 0)
		{
			flag = 1;
		}
	} while (flag == 0);
		
}

int menu()
{
	cout << "What do you desire" << endl;
	cout << "--------------------" << endl;
	cout << "Press (1) for Insert at tail" << endl;
	cout << "Press (2) for Insert at Head" << endl;
	cout << "Press (3) for Insert At Position" << endl;
	cout << "Press (4) for Delete A Node" << endl;
	cout << "Press (5) for Display" << endl;
	cout << "Press (6) for Sort Ascending" << endl;
	cout << "Press (7) for Sort Descending" << endl;
	cout << "Press (8) for Count all elements" << endl;
	cout << "Press (9) for search an element" << endl;
	cout << "Press (0) for to Exit The Program" << endl;
	int c;
	cin >> c;
	cout << endl;
	return c;
}

