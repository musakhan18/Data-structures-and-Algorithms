#include "myStack.h"

myStack::myStack(int size)
{
	MaxSize = size;
	arr = new char[MaxSize];
	CurrentSize = 0;
}

myStack::myStack(const myStack& obj)
{
	MaxSize = obj.MaxSize;
	CurrentSize = obj.CurrentSize;
	arr = new char[MaxSize];
	for (int i = 0; i < CurrentSize; i++)
	{
		arr[i] = obj.arr[i];
	}
}

void myStack::AddElement(char num)
{
	if (!IsFull())
	{
		arr[CurrentSize++] = num;
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
		return arr[--CurrentSize];
	}
	else
	{
		cout << "List is empty" << endl;
	}
}

bool myStack::IsFull()
{
	bool flag = false;
	if (CurrentSize == MaxSize)
	{
		flag = true;
	}
	return flag;
}

bool myStack::IsEmpty()
{
	bool flag = 0;
	if (CurrentSize == 0)
	{
		flag = true;
	}
	return flag;
}

char myStack::last()
{
	bool flag = IsEmpty();
	if (!flag)
	{
		return arr[CurrentSize - 1];
	}
	else
	{
		return -1;
	}
}

int myStack::size()
{
	return CurrentSize;
}

char* myStack::Getarr()const
{
	char* temp = new char[MaxSize];
	for (int i = 0; i < CurrentSize; i++)
	{
		temp[i] = arr[i];
	}
	return temp;
}

myStack::~myStack() {}
