#include<iostream>
#include"myList.h"
using namespace std;

int menu();
int Smenu();
int Qmenu();

int main()
{
	bool qF = 0, sF = 0, cF = 0;
	do
	{
		int c = menu();
		if (c==1)
		{
			myList* Sobj = new myList();
			do
			{
				int s = Smenu();
				if (s==1)
				{
					int d;
					cout << "Enter Value: "; cin >> d;
					Sobj->add_node_tail(d);
					cout << "Value Added successfully!!" << endl << endl;
					sF = 0;
				}
				if (s==2)
				{
					cout << "Last: " <<Sobj->back()<<endl; 
					Sobj->remove_from_tail();
					cout << "Value Poped successfully!!" << endl << endl;
					sF = 0;
				}
				if (s==3)
				{
					Sobj->display();
					cout << endl;
				}
				if (s==4)
				{
					cout << "Last: " << Sobj->back() << endl << endl;
				}
				if (s==5)
				{
					sF = 1;
				}
			} while (sF==0);
		}
		if (c==2)
		{
			myList* Qobj = new myList();
			do
			{
				int q = Qmenu();
				if (q == 1)
				{
					int d;
					cout << "Enter Value: "; cin >> d;
					Qobj->add_node_tail(d);
					cout << "Value Added successfully!!" << endl << endl;
				}
				if (q == 2)
				{
					cout << "Front: " << Qobj->front() << endl;
					Qobj->remove_from_head();
					cout << "Value Poped successfully!!" << endl << endl;
				}
				if (q == 3)
				{
					Qobj->display();
					cout << endl;
				}
				if (q==4)
				{
					cout << "Front: " << Qobj->front() << endl << endl;
				}
				if (q == 5)
				{
					cout << "Rear: " << Qobj->back() << endl << endl;
				}
				if (q == 6)
				{
					qF = 1;
				}
			} while (qF == 0);
		}
		if (c==3)
		{
			cF = 1;
		}
	} while (cF==0);
}

int menu()
{
	cout << "^What do you desire^" << endl;
	cout << "-----------------" << endl;
	cout << "Press (1) for Stack" << endl;
	cout << "Press (2) for Queue" << endl;
	cout << "Press (3) To Exit" << endl;
	int c;
	cin >> c;
	cout << endl;
	return c;
}

int Smenu()
{
	cout << "^What do you desire^" << endl;
	cout << "-----------------" << endl;
	cout << "Press (1) for Push" << endl;
	cout << "Press (2) for Pop" << endl;
	cout << "Press (3) for Display" << endl;
	cout << "Press (4) to see Peak element" << endl;
	cout << "Press (5) To Exit" << endl;
	int c;
	cin >> c;
	cout << endl;
	return c;
}

int Qmenu()
{
	cout << "^What do you desire^" << endl;
	cout << "-----------------" << endl;
	cout << "Press (1) for Add on Tail" << endl;
	cout << "Press (2) for Remove from Head" << endl;
	cout << "Press (3) for Display" << endl;
	cout << "Press (4) to see Front" << endl;
	cout << "Press (5) to see Rear" << endl;
	cout << "Press (6) To Exit" << endl;
	int c;
	cin >> c;
	cout << endl;
	return c;
}