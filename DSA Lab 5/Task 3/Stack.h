#pragma once
#include"List.h"
#include<iostream>
using namespace std;
template <class T>
class Stack :public List<T>
{
public:
	Stack() :List<T>(){}

	Stack(const Stack& obj) :List<T>(obj){}
	
	void AddElement(T num)
	{
		if (!isfull())
		{
			List<T>::arr[List<T>::currentSize]=num;
			List<T>::currentSize++;
		}
		else
		{
			cout << "List is full" << endl;;
		}
	}

	T RemoveElement()
	{
		if (!IsEmpty())
		{
			List<T>::currentSize--;
			return List<T>::arr[List<T>::currentSize];
		}
		else
		{
			cout << "List is empty" << endl;
			return -1;
		}
	}

	int size()
	{
		return List<T>::currentSize;
	}

	T* getarr()const
	{
		T* localtemp = new T[List<T>::maxSize];
		for (int i = 0; i < List<T>::currentSize; i++)
		{
			localtemp[i] = List<T>::arr[i];
		}
		return localtemp;
	}

	bool IsEmpty()
	{
		bool flag = 0;
		if (List<T>::currentSize == 0)
		{
			flag = true;
		}
		return flag;
	}

	T last()
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

	bool isfull()
	{
		bool flag = false;
		if (List<T>::currentSize == List<T>::maxSize)
		{
			flag= true;
		}
		return flag;
	}

	~Stack(){}
};

