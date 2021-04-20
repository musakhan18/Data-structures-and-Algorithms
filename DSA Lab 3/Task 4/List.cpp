#include"List.h"

List::List(int size)
{
	MaxSize = size;
	arr = new int[MaxSize];
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