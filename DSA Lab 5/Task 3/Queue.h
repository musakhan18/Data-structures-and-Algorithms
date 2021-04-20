#pragma once
#include<iostream>
using namespace std;
template <class T>
class Queue
{
	T *arr;
	int _front;
	int rear;
	int maxSize;
public:
	Queue(int s=10)
	{
		arr = new T[s];
		maxSize = s;
		rear = 0;
		_front = 0;
	}

	Queue(const Queue& obj)
	{
		maxSize =obj.maxSize;
		rear = obj.rear;
		_front = obj._front;
		arr = new T[obj.maxSize];
		for (int i = 0; i < obj.maxSize; i++)
		{
			arr[i] = obj.arr[i];
		}
	}

	bool empty()
	{
		bool flag = 0;
		if (_front == rear)
		{
			flag = 1;
		}
		return flag;
	}

	bool full()
	{
		bool flag = 0;
		if (rear == maxSize)
		{
			flag = 1;
		}
		return flag;
	}

	int size()
	{
		return rear;
	}

	T front()
	{
		return arr[_front];
	}

	void enqueue(T d)
	{
		if (!full())
		{
			arr[rear] = d;
			rear++;
		}
		else
		{
			cout << "Queue is full" << endl;
		}
	}

	T dequeue()
	{
		if (!empty())
		{
			T temp = arr[_front];
			rear--;
			rearrange();
			return temp;
		}
		else
		{
			cout << "Queue is empty" << endl;
		}
	}

	void rearrange()
	{
		for (int i = 0; i < rear; i++)
		{
			arr[i] = arr[i + 1];
		}
	}

	int* Getarr()const
	{
		T* temp = new T[rear];
		for (int i = 0; i < rear; i++)
		{
			temp[i] = arr[i];
		}
		return temp;
	}

	void Sort()
	{
		for (int i = 0; i <rear; i++)
		{
			for (int j = 0; j < rear; j++)
			{
				if (arr[i]<arr[j])
				{
					swap(arr[i], arr[j]);
				}
			}
		}
	}

	~Queue()
	{
		delete[] arr;
		arr = nullptr;
	}
};

