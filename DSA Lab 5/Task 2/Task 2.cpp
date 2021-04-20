#include<iostream>
#include"Queue.h"
using namespace std;
template <class T>
void display(Queue<T>&);

int main()
{
	Queue<int> obj;
	cout << "Enque" << endl;
	cout << "------" << endl;
	obj.enqueue(2);
	obj.enqueue(7);
	obj.enqueue(1);
	obj.enqueue(4);
	obj.enqueue(3);
	display(obj);
	cout << "Front element: " << obj.front() << endl << endl;
	obj.Sort();
	display(obj);
	/*cout << "\ndequeue" << endl;
	cout << "--------" << endl;
	obj.dequeue();
	obj.dequeue();
	display(obj);*/
	cout << "Front element: " << obj.front() << endl;
}

template<class T>void display(Queue<T>& obj)
{
	for (int i = 0; i < obj.size(); i++)
	{
		cout << obj.Getarr()[i] << endl;
	}
	cout << endl;
}