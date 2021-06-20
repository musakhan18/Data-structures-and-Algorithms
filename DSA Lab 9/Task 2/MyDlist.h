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

	void RemoveDuplicates()
	{
		node* temp = head;
		node* temp1;
		int temp2 = 0;
		while (temp->next != head)
		{
			temp1 = temp->next;
			while (temp1 != head)
			{
				if (temp->data > temp1->data)
				{
					temp2 = temp->data;
					temp->data = temp1->data;
					temp1->data = temp2;
				}

				temp1 = temp1->next;
			}
			temp = temp->next;
		}









		temp = head;
		temp1;
		node* dup;
		while (temp->next != head)
		{
			temp1 = temp;
			while (temp1->next != head)
			{

				if (temp->data == temp1->next->data)
				{
					dup = temp1->next;
					temp1->next = temp1->next->next;
					delete dup;
				}
				else
				{
					temp1 = temp1->next;
				}
			}
			temp = temp->next;
		}
	}

	int  GetNth(int pos)
	{

		int size = count();
		if (pos <= size)
		{
			node* temp = head;
			for (int i = 1; i < pos; i++)
			{
				temp = temp->next;
			}
			int nth = temp->data;

			return nth;
		}
		else
		{
			cout << "Returning Garbage" << endl;
			return 0;
		}
	}

	int Pop()
	{
		node* temp = head;
		int p = temp->data;
		head = head->next;
		head->prev = nullptr;
		tail->next = head;
		head->prev = tail;
		return p;
	}

	void append(MyDlist* obj, MyDlist* obj1)
	{
		int size = obj1->count();
		for (int i = 0; i < size; i++)
		{

			obj->add_node_tail(obj1->Pop());
		}
		obj->display();
	}

	void shuffleMerge(MyDlist* obj, MyDlist* obj1)
	{
		int size1 = obj->count();
		int size2 = obj1->count();
		cout << "Elements of Link List 1: " << size1 << endl;
		cout << "Elements of Link List 2: " << size2 << endl;
		MyDlist* obj2 = new MyDlist();

		while (size1 != 0 && size2 != 0)
		{
			obj2->add_node_tail(obj->Pop());
			obj2->add_node_tail(obj1->Pop());
			size1--;
			size2--;
		}

		if (size1 != 0)
		{
			while (size1 != 0)
			{
				obj2->add_node_tail(obj->Pop());
				size1--;
			}
		}

		if (size2 != 0)
		{
			while (size2 != 0)
			{
				obj2->add_node_tail(obj1->Pop());
				size2--;
			}
		}
		obj2->display();
		cout << "Count of Elements After Suffle Merge: " << obj2->count() << endl;
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

	void insertsort(int data)
	{
		node* temp = head;
		node* temp1;
		int temp2 = 0;
		while (temp->next != head)
		{
			temp1 = temp->next;
			while (temp1 != head)
			{
				if (temp->data > temp1->data)
				{
					temp2 = temp->data;
					temp->data = temp1->data;
					temp1->data = temp2;
				}

				temp1 = temp1->next;
			}
			temp = temp->next;
		}
		sortedInsert(data);
	}


	void sortedInsert(int data)
	{
		node* temp = head;
		node* temp1;
		int size = count();
		int c = 1;
		bool flag = false;
		int temp2 = 0;
		while (temp->next != head)
		{
			if (data < temp->data)
			{
				flag = true;
				insertNth(c, data);
				break;
			}
			c++;
			temp = temp->next;
		}
		if (data < temp->data && flag != true)
		{
			insertNth(c, data);
		}
		else if (flag == false)
		{
			c++;
			insertNth(c, data);
		}
	}

	

	void insertNth(int pos, int data)
	{
		int s = count();
		if (pos != 0 && pos - 1 <= s)
		{

			if (pos == 1)
			{
				addnodeHead(data);
			}
			else if (pos - 1 == s)
			{
				add_node_tail(data);
			}
			else
			{
				node* temp = head;
				for (int i = 1; i < pos - 1; i++)
				{
					temp = temp->next;
				}
				node* temp1 = temp->next;
				node* temp2 = new node();
				temp2->data = data;
				temp2->next = temp1;
				temp2->prev = temp1->prev;
				temp->next = temp2;
				temp1->prev = temp2;

			}
		}
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

	void DeleteList()
	{
		node* temp = head;
		while (temp->next != head)
		{
			head = head->next;
			head->prev = nullptr;
			tail->next = head;
		}
		temp = nullptr;
		head->next = nullptr;
		tail->prev = nullptr;
		head = nullptr;
		tail = nullptr;
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