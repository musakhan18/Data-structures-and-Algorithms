#include "Stack.h"
template <typename T>

Stack<T>::Stack() :List()
{

}

template <typename T>Stack<T>::Stack(const Stack& obj):List(obj)
{
	/*maxSize = obj.maxSize;
	currentSize = obj.currentSize;
	arr = new int[maxSize];
	for (int i = 0; i < currentSize; i++)
	{
		arr[i] = obj.arr[i];
	}*/
}

template <typename T>void Stack<T>::AddElement(T num)
{
	if (!IsFull())
	{
		List<T>::arr = regrow(num);
		/*arr[currentSize++] = num;*/
	}
	else
	{
		cout << "List is full" << endl;;
	}
}

template <typename T> T Stack<T>::RemoveElement()
{
	if (!IsEmpty())
	{
		List<T>::currentSize--;
		return List<T>::arr[List<T>:: currentSize];
	}
	else
	{
		cout << "List is empty" << endl;
	}
}

template <typename T>bool Stack<T>::IsFull()
{
	bool flag = false;
	if (List<T>::currentSize == List<T>::maxSize)
	{
		flag = true;
	}
	return flag;
}

template <typename T>bool Stack<T>::IsEmpty()
{
	bool flag = 0;
	if (List<T>::currentSize == 0)
	{
		flag = true;
	}
	return flag;
}

template <typename T>T Stack<T>::last()
{
	bool flag = IsEmpty();
	if (!flag)
	{
		return List<T>::arr[List<T>::currentSize - 1];
	}
	else
	{
		return -1;
	}
}

template <typename T>T Stack<T>::size()
{
	return List<T>::currentSize;
}

template <typename T>T* Stack<T>::Getarr()const
{
	int* temp = new int[List<T>::maxSize];
	for (int i = 0; i < List<T>::currentSize; i++)
	{
		temp[i] = List<T>::arr[i];
	}
	return temp;
}

template <typename T>Stack<T>::~Stack() {}
