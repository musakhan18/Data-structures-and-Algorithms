#include "myStack.h"

myStack::myStack(int size)
{
	MaxSize = size;
	arr = new int[size];
	CurrentSize = 0;
}

myStack::myStack(const myStack& obj)
{
	MaxSize = obj.MaxSize;
	CurrentSize = obj.CurrentSize;
	arr = new int[MaxSize];
	for (int i = 0; i < CurrentSize; i++)
	{
		arr[i] = obj.arr[i];
	}
}

void myStack::AddElement(int num)
{
	if (!IsFull())
	{
		CurrentSize++;
		arr[CurrentSize] = num;
	}
	else
	{
		cout << "List is full" << endl;
	}
}

int myStack::RemoveElement()
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

int myStack::last()
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

int* myStack::Getarr()const
{
	int* temp = new int[MaxSize];
	for (int i = 0; i < CurrentSize; i++)
	{
		temp[i] = arr[i];
	}
	return temp;
}

myStack::~myStack() {}
