#include"D_Linklist.h"
#include<iostream>
using namespace std;

class MyDlist : public D_Linklist
{
public:
	MyDlist()
	{
		head = nullptr;
		tail = nullptr;
	}
	void add_node_tail(int data)
	{
		node * temp = new node();
		temp->next = nullptr;
		temp->prev = nullptr;
		temp->data = data;
		if (head == nullptr)
		{
			head = temp;
			tail = temp;
			head->prev = tail;
			tail->next = head;
		}
		else
		{
			tail->next = temp;
			temp->prev = tail;
			tail = temp;
			tail->next = head;
		}
	}

    void addnodeHead(int data)
	{
		node* temp = new node();
		temp->next = nullptr;
		temp->prev = nullptr;
		temp->data = data;
		if (head == nullptr)
		{
			head = temp;
			tail = temp;
			head->prev = tail;
			tail->next = head;
		}
		else
		{
			head->prev = temp;
			temp->prev = tail;
			temp->next = head;
			head = temp;
			tail->next = temp;
		}
	}
	
	void remove_node(int value)
	{
		node* temp =head;
		while (temp->next !=head )
		{
			if (temp->data == value)
			{
				break;
			}
			temp = temp->next;
		}
		if (temp == tail)
		{
			tail = tail->prev;
			tail->next->prev = nullptr;
			tail->next = head;
		}
		else if (temp == head)
		{
			head = head->next;
			head->prev = nullptr;
			tail->next = head;
		}
		else
		{
			temp->prev->next = temp->next;

			temp->next->prev = temp->prev;
			temp->next = nullptr;
			temp->prev = nullptr;
		}
	}

	void add_node_aftervalue(int data, int value)
	{
		node* temp = head;
		bool flag = false;
		while (temp->next != head)
		{
			if (temp->data == value)
			{
				flag = true;
				if (temp == tail)
				{
					add_node_tail(data);
				}
				else
				{
					node* temp1 = new node();
					temp1->data = data;
					temp1->next = nullptr;
					temp1->prev = nullptr;
					temp1->next = temp->next;
					temp->next = temp1;
					temp1->prev = temp;
					temp1->next->prev = temp1;
				}
				break;
			}
			temp = temp->next;
		}
		if (temp->data == value)
		{
			flag = true;
			if (temp == tail)
			{
				add_node_tail(data);
			}
			else
			{
				node* temp1 = new node();
				temp1->data = data;
				temp1->next = nullptr;
				temp1->prev = nullptr;
				temp1->next = temp->next;
				temp->next = temp1;
				temp1->prev = temp;
				temp1->next->prev = temp1;
			}
		}

		if (flag == false)
		{
			cout << "Value Not Present In Link List you try to add After Value" << endl;
		}
	}

	int count()
	{
		int total=0;
		node* temp = head;
		while (temp->next != head)
		{
			total++;
			temp = temp->next;
		}
		total++;
		
		return total;
	}

	void sortascending()
	{
		node* temp = head;
		node* temp1;
		int temp2 = 0;
		for(int i=0;i<count();i++)
		{
			temp1 = temp->next;
			for (int j = i + 1; j < count(); j++)
			{
				if (temp->data > temp1->data)
				{
					temp2 = temp->data;
					temp->data = temp1->data;
					temp1->data = temp2;
				}
				temp1 = temp1->next;
			}
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}

	void sortDescending()
	{
		node* temp = head;
		node* temp1;
		int temp2 = 0;
		for (int i = 0; i < count(); i++)
		{
			temp1 = temp->next;
			for (int j = i + 1; j < count(); j++)
			{
				if (temp->data < temp1->data)
				{
					temp2 = temp->data;
					temp->data = temp1->data;
					temp1->data = temp2;
				}

				temp1 = temp1->next;
			}
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}
	
	void display()
	{
		node* temp = head;
		cout << temp->data << " ";
		while (temp->next != head)
		{
			temp = temp->next;
			cout << temp->data << " ";
		}
		cout << endl << endl;
	}

	int search(int data)
	{
		int i = 0;
		node* temp = head;
		int pos;
		bool flag = false;
		while (flag==0 || temp->next != head)
		{
			if (temp->data == data)
			{
				flag = 1;
			    pos = i;
				break;
			}
			temp = temp->next;
			i++;
		}
		if (flag==0)
		{
			pos = -1;
		}
		return pos;
	}

	void swapHeadTail()
	{
		int extra;
		extra = head->data;
		head->data = tail->data;
		tail->data = extra;
	}

	int getTotal()
	{
		int total = 0;
		node* temp = head;
		while (temp->next != head)
		{
			total = total + temp->data;
			temp = temp->next;

		}
		total = total + temp->data;
		return total;
	}
	
	void reverse()
	{
		node* temp = tail->next;
		int extra = 0;
		while (temp->next != tail->next)
		{
			extra = temp->data;
			temp = temp->next;
			remove_node(extra);
			addnodeHead(extra);
		}
		extra = temp->data;
		remove_node(extra);
		addnodeHead(extra);
	}


	~MyDlist()
	{
		node* temp = head;
		for (int i = 0; i < count(); i++)
		{
			head = head->next;
			head->prev = nullptr;
			tail->next = head;
		}
		temp= nullptr;
		head->next = nullptr;
	}
};