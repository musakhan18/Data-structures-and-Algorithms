#include "List.h"
template <typename T>

List<T>::List()
{
	arr = new T[1];
	maxSize = 1;
	currentSize = 0;
}
template <typename T>
List<T>::List(const List& obj)
{
	maxSize = obj.maxSize;
	currentSize = obj.currentSize;
	arr = new int[maxSize];
	for (int i = 0; i < currentSize; i++)
	{
		arr[i] = obj.arr[i];
	}
}

template <typename T>
T* List<T>::regrow(T num)
{
	T* temp=new T[currentSize];
	for (int i = 0; i < currentSize; i++)
	{
		temp[i] = arr[i];
	}
	arr = new T[currentSize + 1];
	for (int i = 0; i < currentSize; i++)
	{
		arr[i] = temp[i];
	}
	arr[currentSize] = num;
	currentSize++; maxSize++;
	return arr;
}

template <typename T>List<T>::~List()
{
	delete[] arr;
	arr = nullptr;
}