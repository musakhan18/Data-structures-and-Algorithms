#pragma once
#include"LinkedList.h"
template <class T>
class myLL :public LinkedList<T>
{
public:
	myLL() :LinkedList<T>()
	{

	}

	void insertAtEnd(T d)
	{
		node<T>* temp1 = new node<T>();
		node<T>* temp2;
		temp1->next = nullptr;
		temp1->data = d;
		if (LinkedList<T>::head == nullptr)
		{
			LinkedList<T>::head = temp1;
		}
		else
		{
			temp2 = LinkedList<T>::head;
			while (temp2->next != nullptr)
			{
				temp2 = temp2->next;
			}
			temp2->next = temp1;
		}
	}

	T deleteFromHead()
	{
		if (!isEmpty())
		{
			T d = LinkedList<T>::head->data;
			LinkedList<T>::head = LinkedList<T>::head->next;
			return d;
		}
		else
		{
			cout << "List is Empty" << endl;
			return 0;
		}
	}

	bool isEmpty()
	{
		bool flag = 0;
		if (LinkedList<T>::head == nullptr)
		{
			flag = 1;
		}
		return flag;
	}

	void display()
	{
		if (!isEmpty())
		{
			node<T>* temp1;
			temp1 = LinkedList<T>::head;
			while (temp1 != nullptr)
			{
				cout << temp1->data << " ";
				temp1 = temp1->next;
			}
			cout << endl << endl;
		}
		else
		{
			cout << "List is Empty" << endl;
		}
	}

	/*~myLL()
	{
		delete[] LinkedList<T>::head;
		LinkedList<T>::head = nullptr;
	}*/
};