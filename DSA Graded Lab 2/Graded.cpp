#include<iostream>
#include<string>
#include"Stack.h"
template<class T>
void Reverse(Stack<T>&,int);
int Getsize(string s);

using namespace std;
int main()
{
	Stack<char> obj;
	string s;
	cout << "Enter line: "; cin >> s;
	int size = Getsize(s);
	for (int i = 0; i < Getsize(s); i++)
	{
		obj.AddElement(s[i]);
	}

	Reverse(obj, size);
	
}

int Getsize(string s)
{
	int size = 0;
	while (s[size]!='\0')
	{
		size++;
	}
	return size;
}

template<class T>void Reverse(Stack<T>& obj, int s)
{
	Stack<char> obj2;
	cout << "Stack" << endl;
	cout << "------" << endl;
	for (int i = 0; i < s; i++)
	{
		cout << obj.getarr()[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < s; i++)
	{
		T temp = obj.RemoveElement();
		obj2.AddElement(temp);
	}
	cout << "Reverse Stack" << endl;
	cout << "--------------" << endl;
	for (int i = 0; i < s; i++)
	{
		cout << obj2.getarr()[i] << endl;
	}
}

