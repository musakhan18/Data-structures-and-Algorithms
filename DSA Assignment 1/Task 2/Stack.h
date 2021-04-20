#pragma once
class Stack
{
protected:
	char* arr;
	int MaxSize;
	int CurrentSize;
public:
	Stack(int = 0);
	Stack(const Stack&);
	virtual void AddElement(char) = 0;
	virtual char RemoveElement() = 0;
	virtual ~Stack();
};

