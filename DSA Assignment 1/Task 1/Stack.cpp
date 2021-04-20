#include "Stack.h"

Stack::Stack(int s)
{
	arr = new int[s];
	MaxSize = s;
	CurrentSize = 0;
}

Stack::Stack(const Stack& obj)
{
	MaxSize = obj.MaxSize;
	CurrentSize = obj.CurrentSize;
	arr = new int[MaxSize];
	for (int i = 0; i < CurrentSize; i++)
	{
		arr[i] = obj.arr[i];
	}
}

Stack:: ~Stack()
{
	delete[]arr;
	arr = nullptr;
}