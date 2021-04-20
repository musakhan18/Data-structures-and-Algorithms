#include "myStack.h"

myStack::myStack(int s)
{
	arr = new int[s];
	max = s;
	Csize = 0;
}

myStack::myStack(const myStack& obj)
{
	max = obj.max;
	Csize = obj.Csize;
	arr = new int[max];
	for (int i = 0; i < Csize; i++)
	{
		arr[i] = obj.arr[i];
	}
}

void myStack::AddElement(int num)
{
	if (!IsFull())
	{
		arr[Csize++] = num;
	}
	else
	{
		cout << "List is full" << endl;;
	}
}

int myStack::RemoveElement()
{
	if (!IsEmpty())
	{
		return arr[--Csize];
	}
	else
	{
		cout << "List is empty" << endl;
	}
}

bool myStack::IsFull()
{
	bool flag = false;
	if (Csize == max)
	{
		flag = true;
	}
	return flag;
}

bool myStack::IsEmpty()
{
	bool flag = 0;
	if (Csize == 0)
	{
		flag = true;
	}
	return flag;
}

void myStack::sort()
{
	for (int i = 0; i < Csize; i++)
	{
		for (int j = i+1; j < Csize; j++)
		{
			if (arr[i]<arr[j])
			{
				swap(arr[i], arr[j]);
			}
		}
	}
}

void myStack::display()
{
	for (int i = 0; i < Csize; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int myStack::size()
{
	return Csize;
}

myStack::~myStack() {}
