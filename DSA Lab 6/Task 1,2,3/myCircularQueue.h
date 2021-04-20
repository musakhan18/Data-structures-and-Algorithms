#include"Queue.h"
template <class T>
class myCircularQueue: public Queue<T>
{
	int rear = 0;
	int front = 0;
public:
	myCircularQueue(int size)
	{
		Queue<T>::arr = new T[size];
		Queue<T>::max_size = size;
		Queue<T>::no_of_elements = 0;
	}
	void enqueue(T data)
	{
		Queue<T>::rear = Queue<T>::rear%Queue<T>::max_size;
		Queue<T>::arr[Queue<T>::rear++] = data;
		Queue<T>::no_of_elements++;
	}
	T dequeue()
	{
		Queue<T>::front = Queue<T>::front%Queue<T>::max_size;
		Queue<T>::no_of_elements--;
		return Queue<T>::arr[Queue<T>::front++];
	}
	bool isempty()
	{
		bool flag = false;
		if (Queue<T>::no_of_elements==0)
		{
			flag = true;
		}
		return flag;
	}
	bool isfull()
	{
		bool flag = false;
		if (Queue<T>::no_of_elements == Queue<T>::max_size)
		{
			flag = true;
		}
		return flag;
	}
	T Front()
	{
		T f = Queue<T>::arr[Queue<T>::front];
		return f;
	}
	int size()
	{
		return Queue<T>::no_of_elements;
	}
	T* GetQueue()
	{

		T* temp=new T[Queue<T>::no_of_elements];
		for (int i = 0; i < Queue<T>::no_of_elements; i++)
		{
			temp[i]= Queue<T>::arr[i];
		}
		return temp;
	}
};