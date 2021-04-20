#include<iostream>
#include"Stack.h"
#include"Queue.h"
using namespace std;

template <class T>
void display(Stack<T>&);
int main()
{
	int num1, num2, reversed = 0;
	Queue<int> Qobj1;
	Queue<int> Qobj2;

	cout << "Enter Num 1: "; cin >> num1;
	cout << "Enter Num 2: "; cin >> num2;

	while (num1 != 0)
	{
		int rem = num1 % 10;
		Qobj1.enqueue(rem);
		reversed = reversed * 10 + rem;
		num1 /= 10;
	}
	reversed = 0;
	while (num2 != 0)
	{
		int rem = num2 % 10;
		Qobj2.enqueue(rem);
		reversed = reversed * 10 + rem;
		num2 /= 10;
	}
	Stack<int> Sobj1;
	int qutient = 0;
	int sum = 0;
	while (!Qobj1.empty() && !Qobj2.empty())
	{
		sum += Qobj1.dequeue() + Qobj2.dequeue();
		qutient = sum / 10;
		int rem = sum % 10;
		sum = sum + qutient;
		Sobj1.AddElement(rem);
		sum = 0;
		sum = sum + qutient;
	}

	Stack<int>Sobj2;
	int s = Sobj1.size();
	for (int i = 0; i <s ; i++)
	{
		int temp = Sobj1.RemoveElement();
		Sobj2.AddElement(temp);
	}
	display(Sobj2);
}

template<class T>void display(Stack<T>& obj)
{
	T* temp = obj.getarr();
	cout << "Sum is: ";
	if (!obj.IsEmpty())
	{
		for (int i = 0; i < obj.size(); i++)
		{
			cout << temp[i];
		}
	}
	else
	{
		cout << "Stack is empty"<<endl;
	}
}