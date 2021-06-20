#pragma once
#include"Queue.h"
#include"myLL.h"
template<class T>
class myQueue :public Queue<T>
{
public:
	bool isEmpty()
	{
		bool flag=false;
		if (Queue<T>::obj.isEmpty())
		{
			flag= true;
		}
		return flag;
	}
	void enqueue(T data)
	{
		Queue<T>::obj.insertAtEnd(data);
	}
	T dequeue()
	{
		T num = Queue<T>::obj.deleteFromHead();
		return num;
	}
	void display()
	{
		Queue<T>::obj.display();
	}
};