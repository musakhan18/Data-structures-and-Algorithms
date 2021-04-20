#pragma once
class Stack
{
protected:
	int* arr;
	int MaxSize;
	int CurrentSize;
public:
	Stack(int = 0);
	Stack(const Stack&);
	virtual void AddElement(int) = 0;
	virtual int RemoveElement() = 0;
	virtual ~Stack();
};

