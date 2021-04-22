#include"LinkList.h"
#include<iostream>
using namespace std;

class myList : public LinkList
{
public:
	myList()
	{
		head = nullptr;
		tail = nullptr;
		Curr_size = 0;
	}

	void add_node_tail(int data)
	{
		node* temp = new node();
		temp->data = data;
		temp->next = nullptr;
		if (head == nullptr)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
		Curr_size++;
	}

	void add_node_head(int data)
	{
		node* temp = new node();
		temp->data = data;
		temp->next = nullptr;
		if (head == nullptr)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			temp->next = head;
			head = temp;
		}
		Curr_size++;
	}

	void remove_from_tail()
	{
		if (!Is_empty())
		{
			node* temp = head;
			while (temp->next->next != nullptr)
			{
				temp = temp->next;
			}
			temp->next = nullptr;
			tail = temp;
			Curr_size--;
		}
		else
		{
			cout << "List is empty" << endl;
		}
	}

	void remove_from_head()
	{
		if (!Is_empty())
		{
			node* temp = head;
			head = head->next;
			temp->next = nullptr;
			Curr_size--;
		}
		else
		{
			cout << "List is empty" << endl;
		}
	}

	bool Is_empty()
	{
		bool flag = 0;
		if (Curr_size == 0)
		{
			flag = 1;
		}
		return flag;
	}

	int front()
	{
		node* temp = head;
		return temp->data;
	}

	int back()
	{
		node* temp = tail;
		return temp->data;
	}

	void display()
	{
		if (!Is_empty())
		{
			cout << "displaying all the nodes" << endl;
			cout << "-------------------------" << endl;
			node* temp = head;
			cout << temp->data << endl;
			while (temp->next != nullptr)
			{
				temp = temp->next;
				cout << temp->data << endl;
			}
		}
		else
		{
			cout << "List is empty" << endl;
		}
	}
};