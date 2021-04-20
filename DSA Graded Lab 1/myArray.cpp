#include "myArray.h"

myArray::myArray(int size)
{
	MaxSize = size;
	arr = new int[MaxSize];
	CurrentSize = 0;
}

myArray::myArray(const myArray& obj)
{
	MaxSize = obj.MaxSize;
	CurrentSize = obj.CurrentSize;
	arr = new int[MaxSize];
	for (int i = 0; i < CurrentSize; i++)
	{
		arr[i] = obj.arr[i];
	}
}

bool myArray::insert(int num)
{
	bool IsFull = false;
	if (CurrentSize == MaxSize)
	{
		IsFull = true;
	}
	if (!IsFull)
	{
		arr[CurrentSize++] = num;
		IsFull = true;
	}
	else
	{
		IsFull = false;
	}
	return IsFull;
}

bool myArray::delete_right()
{
	bool IsEmpty = 0;
	if (CurrentSize == 0)
	{
		IsEmpty = true;
	}
	if (!IsEmpty)
	{
		--CurrentSize;
		IsEmpty = true;
	}
	else
	{
		IsEmpty = false;
	}
	return IsEmpty;
}

bool myArray::delete_left()
{
	bool IsEmpty = 0;
	if (CurrentSize == 0)
	{
		IsEmpty = true;
	}
	if (!IsEmpty)
	{
		int* temp = new int[CurrentSize];
		for (int i = 0; i < CurrentSize; i++)
		{
			temp[i] = arr[i];
		}
		for (int i = 1, j = 0; i < CurrentSize, j < CurrentSize; i++, j++)
		{
			arr[j] = temp[i];
		}
		IsEmpty = true;
		CurrentSize--;
	}
	else
	{
		IsEmpty = false;
	}
	return IsEmpty;
}

bool myArray::search(int num, int& index)
{
	bool found = false;
	for (int i = 0; i < CurrentSize; i++)
	{
		if (arr[i]==num)
		{
			index = i;
			found = true;
			break;
		}
		else
		{
			found = false;
		}
	}
	return found;
}

void myArray::display()
{
	for (int i = 0; i < CurrentSize; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

myArray::~myArray() {}