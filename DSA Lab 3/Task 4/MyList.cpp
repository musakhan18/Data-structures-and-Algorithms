#include "MyList.h"

MyList::MyList(int size)
{
	MaxSize = size;
	arr = new int[MaxSize];
	CurrentSize = 0;
}

MyList::MyList(const MyList& obj)
{
	MaxSize = obj.MaxSize;
	CurrentSize = obj.CurrentSize;
	arr = new int[MaxSize];
	for (int i = 0; i < CurrentSize; i++)
	{
		arr[i] = obj.arr[i];
	}
}

void MyList::AddElement(int num)
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

int MyList::RemoveElement()
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

bool MyList::IsFull()
{
	bool flag = false;
	if (CurrentSize == MaxSize)
	{
		flag = true;
	}
	return flag;
}

bool MyList::IsEmpty()
{
	bool flag = 0;
	if (CurrentSize == 0)
	{
		flag = true;
	}
	return flag;
}

int MyList::last()
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

int MyList::size()
{
	return CurrentSize;
}

int* MyList::Getarr()const
{
	int* temp = new int[MaxSize];
	for (int i = 0; i < CurrentSize; i++)
	{
		temp[i] = arr[i];
	}
	return temp;
}

int& MyList::operator[](int num)
{
	if (num >= 0 && num < MaxSize)
	{
		return arr[num];
	}
	else
	{
		return arr[0];
	}
}

const int& MyList::operator[](int num)const
{
	if (num >= 0 && num < MaxSize)
	{
		return arr[num];
	}
	else
	{
		return arr[0];
	}
}

MyList& MyList::operator=(const MyList& obj)
{
	MaxSize = obj.MaxSize;
	CurrentSize = obj.CurrentSize;
	arr = new int[MaxSize];
	for (int i = 0; i < CurrentSize; i++)
	{
		arr[i] = obj.arr[i];
	}
	return*this;
}

MyList::~MyList(){}
