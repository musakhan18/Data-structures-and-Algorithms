#pragma once
template<class T>
class List
{
protected:
		T* arr;
		int maxSize;
		int currentSize;
public:
	List()
	{
		arr = new T[11];
		maxSize = 11;
		currentSize = 0;
	}
	List(const List& obj)
	{
		maxSize = List<T>::obj.maxSize;
		currentSize = List<T>::obj.currentSize;
		arr = new int[maxSize];
		for (int i = 0; i < List<T>::currentSize; i++)
		{
			arr[i] = List<T>::obj.arr[i];
		}
	}
	virtual void AddElement(T) = 0;
	virtual T RemoveElement() = 0;
	
	~List()
	{
		delete[] arr;
		arr = nullptr;
	}
};

