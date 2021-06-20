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
	
	void remove_from_end(node* headd)
	{
		if (!is_Empty())
		{
			node* temp1;
			temp1 = headd;
			while (temp1->next->next != nullptr)
			{
				temp1 = temp1->next;
			}
			temp1->next = nullptr;
		}
		else
		{
			cout << "List is empty" << endl;
		}
	}

	void insertSorted(int d)
	{
		Add_On_Head(d);
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

	node* getHead()
	{
		return head;
	}

	void insert_node_sort(node* headd)
	{
		node* temp = headd;
		node* temp2 = head;
		int data = temp->data;
		int index = 1;
		bool flag = false;
		while (temp2->next != head)
		{
			if (data < temp2->data)
			{
				flag = true;
				insertAtPosition(index, data);
				break;
			}
			index++;
			temp2 = temp2->next;
		}
		if (data < temp2->data && flag != true)
		{
			insertAtPosition(index, data);
		}
		else if (flag == false)
		{
			Add_On_Head(data);
		}
	}

	void insertAtPosition(int p,int d)
	{
		if (p >= 0 && p <= count())
		{
			if (p == 1)
			{
				Add_On_Head(d);
			}
			else if (p-1 == count())
			{
				Add_On_Head(d);
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
};