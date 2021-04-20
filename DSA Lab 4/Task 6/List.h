#pragma once
class List
{
protected:
	int* arr;
	int MaxSize;
	int CurrentSize;
public:
	List(int = 0);
	List(const List& );
	virtual void AddElement(int) = 0;
	virtual int RemoveElement() = 0;
	virtual ~List();
};

