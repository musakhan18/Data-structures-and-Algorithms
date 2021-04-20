#include<iostream>
#include"myCircularQueue.h"
using namespace std;
template <class T>
void showCircularQueue(myCircularQueue <T> obj);
template <class T>
void reverseQueue(myCircularQueue<T>& q);
template <class T>
bool isPalindrome(myCircularQueue<T> q);

int main()
{
	myCircularQueue <int> obj1(5);
	obj1.enqueue(5);
	obj1.enqueue(4);
	obj1.enqueue(3);
	obj1.enqueue(4);
	obj1.enqueue(5);

	cout << "size: " << obj1.size() << endl;
	showCircularQueue(obj1);
	cout << "Reverse Queue" << endl;
	reverseQueue(obj1);
	showCircularQueue(obj1);

	cout <<"isPalindrome: "<<isPalindrome(obj1) << endl << endl;
	obj1.dequeue();
	cout << "size: " << obj1.size() << endl;
	showCircularQueue(obj1);

	obj1.enqueue(72);
	cout << "size: " << obj1.size() << endl;
	showCircularQueue(obj1);
}
template <class T>
void showCircularQueue(myCircularQueue <T> obj)
{
	for (int i = 0; i < obj.size(); i++)
	{
		cout << obj.GetQueue()[i] << endl;

	}
	cout << endl;
}

template <class T>
void reverseQueue(myCircularQueue<T>& q)
{
	bool f = 0;
	if (q.isempty())
	{
		f = 1;
	}
	if (f == 0)
	{
		int d = q.Front();
		q.dequeue();
		reverseQueue(q);
		q.enqueue(d);
	}
}

template <class T>
bool isPalindrome(myCircularQueue<T> q)
{
	myCircularQueue<int> q2(5);
	for (int i = 0; i <q.size(); i++)
	{
		T t = q.GetQueue()[i];
		q2.enqueue(t);
	}
	reverseQueue(q2);
	bool f = 1;
	for (int i = 0; i < q.size(); i++)
	{
		if (q.GetQueue()[i]!=q2.GetQueue()[i])
		{
			f= 0;
			break;
		}
	}
	return f;
}