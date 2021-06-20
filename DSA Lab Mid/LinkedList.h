#pragma once
#include<iostream>
using namespace std;
template<class T>
struct node
{
	T data;
	node* next;
};
template<class T>
class LinkedList
{
protected:
	node<T>* head;
public:
	LinkedList()
	{
		LinkedList<T>::head = nullptr;
	}
	virtual void insertAtEnd(T) = 0;
	virtual T deleteFromHead() = 0;
	virtual bool isEmpty() = 0;
	virtual void display() = 0;
};