#pragma once
#include<iostream>
using namespace std;
struct node
{
	int data;
	node* next;
};

class L_List
{
protected:
	node* head;
public:
	L_List()
	{
		head = nullptr;
	}

	void Add_On_Tail(int d)
	{
		node* temp1 = new node();
		node* temp2;
		temp1->next = nullptr;
		temp1->data = d;
		if (head == nullptr)
		{
			head = temp1;
		}
		else
		{
			temp2 = head;
			while (temp2->next != nullptr)
			{
				temp2 = temp2->next;
			}
			temp2->next = temp1;
		}
	}

	void Remove_On_Tail()
	{
		node* temp1;
		temp1 = head;
		while (temp1->next->next != nullptr)
		{
			temp1 = temp1->next;
		}
		temp1->next = nullptr;
	}

	void Add_On_Head(int d)
	{
		node* temp1 = new node();
		temp1->next = nullptr;
		temp1->data = d;
		if (head == nullptr)
		{
			head = temp1;
		}
		else
		{
			temp1->next = head;
			head = temp1;
		}
	}

	void Remove_On_Head()
	{
		head = head->next;
	}

	void insertSorted(int d)
	{
		Add_On_Tail(d);
		node* temp3 = head;
		int temp2;
		int size = count();
		for (int i = 0; i < size; i++)
		{
			node* temp = head;
			while (temp->next != nullptr)
			{
				if (temp->data > temp->next->data)
				{
					temp2 = temp->data;
					temp->data = temp->next->data;
					temp->next->data = temp2;
				}
				temp = temp->next;
			}
		}
	}

	int getHead()
	{
		return head->data;
	}

	int getTail()
	{
		node* temp1 = head;
		for (int i = 0; i < count(); i++)
		{
			if (temp1->next == nullptr)
			{
				return temp1->data;
				break;
			}
			temp1 = temp1->next;
		}
	}

	void insertAtPosition(int p)
	{
		if (p >= 0 && p <= count())
		{
			int d;
			cout << "Enter num to add on position " << p << ": "; cin >> d;
			if (p == 0)
			{
				Add_On_Head(d);
			}
			else if (p == count())
			{
				Add_On_Tail(d);
			}
			else
			{
				node* temp = head;
				node* temp1;
				node* temp2 = new node();
				for (int i = 1; i < p - 1; i++)
				{
					temp = temp->next;
				}
				temp1 = temp->next;
				temp2->data = d;
				temp2->next = temp1;
				temp->next = temp2;
			}
		}
	}

	void removeFromPosition(int p)
	{
		if (p >= 0 && p <= count())
		{
			if (p == 1)
			{
				Remove_On_Head();
			}
			else if (p == count())
			{
				Remove_On_Tail();
			}
			else
			{
				node* temp = head;
				node* temp1;
				node* temp2;
				for (int i = 1; i < p - 1; i++)
				{
					temp = temp->next;
				}
				temp1 = temp->next;
				temp2 = temp1->next;
				temp->next = temp2;
				temp1->next = nullptr;
			}
		}
		else
		{
			cout << "error!" << endl;
			cout << "Position not exist";
		}
	}
	void remove(int start, int last)
	{
		if (start != 0 && last <= count() && start != last && start + 1 != last && last > start)
		{
			if (start == 1 && last == count())
			{
				head = nullptr;
			}
			else
			{
				node* temp = head;
				int c = 0;
				for (int i = 1; i < start - 1; i++)
				{
					c++;
					temp = temp->next;
				}
				node* temp1 = head;
				for (int i = 1; i < last; i++)
				{
					temp1 = temp1->next;
				}
				temp->next = temp1->next;
			}
		}
		else
		{
			cout << "Error!" << endl;
		}
	}

	int count()
	{
		node* temp1;
		int c = 0;
		temp1 = head;
		while (temp1 != nullptr)
		{
			c++;
			temp1 = temp1->next;
		}
		return c;
	}

	bool is_Empty()
	{
		bool flag = 0;
		if (head == nullptr)
		{
			flag = 1;
		}
		return flag;
	}

	void display()
	{
		node* temp1;
		temp1 = head;
		while (temp1 != nullptr)
		{
			cout << temp1->data << " ";
			temp1 = temp1->next;
		}
		cout << endl << endl;
	}
	~L_List()
	{
		delete[] head;
		head = nullptr;
	}

	bool isPalindrome()
	{
		int s = 0;
		node* temp = head;
		while (temp != nullptr)
		{
			s++;
			temp = temp->next;
		}

		char t;
		node* temp1 = head;
		node* temp2 = head;
		bool flag = 0;
		bool p = 1;
		int c = 0;
		bool w = 0;
		while (flag == 0 || c < s)
		{
			w = 0;
			temp1 = head;
			while (w == 0)
			{
				if (temp1->next == nullptr)
				{
					t = temp1->data;
					temp1 = nullptr;
					w = 1;
					break;
				}
				temp1 = temp1->next;
			}
			if (t != temp2->data)
			{
				p = 0;
				flag = 1;
				break;
			}
			c++;
			temp2 = temp2->next;
		}
		return p;
	}

};