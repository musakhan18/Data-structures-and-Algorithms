#include "myStack.h"

myStack::myStack(int s)
{
	arr = new char[s];
	max = s;
	Csize = 0;
}

myStack::myStack(const myStack& obj)
{
	max = obj.max;
	Csize = obj.Csize;
	arr = new char[max];
	for (int i = 0; i < Csize; i++)
	{
		arr[i] = obj.arr[i];
	}
}

void myStack::AddElement(char num)
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

 char myStack::RemoveElement()
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

bool myStack::palindrome()
{
	bool flag=1;
	char* temp = new char[Csize];
	for (int i = Csize-1,j=0; i >= 0,j<Csize; i--,j++)
	{
		temp[j] = arr[i];
	}
	for (int i = 0; i < Csize; i++)
	{
		if (arr[i]!=temp[i])
		{
			flag = 0;
			break;
		}
		else
		{
			flag = 1;
		}
	}
	return flag;
}

char myStack::size()
{
	return Csize;
}

myStack::~myStack() {}
