#include "List.h"

List::List(int s)
{
	arr = new int[s];
	MaxSize = s;
	CurrentSize = 0;
}

List::List(const List& obj)
{
	MaxSize = obj.MaxSize;
	CurrentSize = obj.CurrentSize;
	arr = new int[MaxSize];
	for (int i = 0; i < CurrentSize; i++)
	{
		arr[i] = obj.arr[i];
	}
}

List:: ~List()
{
	delete[]arr;
	arr = nullptr;
}