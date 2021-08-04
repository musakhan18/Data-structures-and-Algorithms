#include"C_linklist.h"
#include<iostream>
using namespace std;

class My_clist:public C_linklist
{
public:
	My_clist()
	{
		head = nullptr;
		tail = nullptr;
	}

	void remove_from_tail()
	{
		node* temp = head;
		node* temp1 = head->next;
		while (temp1->next != head)
		{
			temp1 = temp1->next;
		}
		temp1->next = nullptr;
		tail = temp;
		tail->next = head;
	}

	void add_node_head(int data)
	{
		node *temp = new node();
		temp->next = nullptr;
		temp->data = data;
		if (head == nullptr)
		{
			head = temp;
			tail = temp;
			tail->next = head;

		}
		else
		{
			temp->next = head;
			head = temp;
			tail->next = head;
		}
	}

	void remove_from_head()
	{
		node* temp = head;
		head = head->next;
		temp->next = nullptr;
		tail->next = head;
	}

	void add_node_tail(int data)
	{
		node * temp = new node();
		temp->next = nullptr;
		temp->data = data;
		if (head == nullptr)
		{
			head = temp;
			tail = temp;
			tail->next = head;
		}
		else
		{
			tail->next = temp;
			tail = temp;
			tail->next = head;
		}
	}
	
	void display()
	{
		node *temp = head;
		cout << temp->data << " ";
		while (temp->next != head)
		{
			temp = temp->next;
			cout << temp->data << " ";
		}
		cout << endl;
	}

	void gradedTask()
	{
		My_clist* obj = new My_clist();
		node* temp3 = head;
		int c = 1;
		int size = 0;
		while (temp3->next != head)
		{
			temp3 = temp3->next;
			size++;
		}
		node* temp = head;
		while (c<=size+1)
		{
			if (c % 2 != 0)
			{
				obj->add_node_tail(temp->data);
			}
			temp = temp->next;
			c++;
		}
		c = 1;
		node* temp2 = head;
		while (c<=size+1)
		{
			if (c % 2 == 0)
			{
				obj->add_node_tail(temp2->data);
			}
			temp2 = temp2->next;
			c++;
		}
		obj->display();
	}
};