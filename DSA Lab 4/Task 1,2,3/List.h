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
		arr = new T[1];
		maxSize = 1;
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
	void regrow(T value)
	{
		T* temp = new T[currentSize];
		for (int i = 0; i < currentSize; i++)
		{
			temp[i] = arr[i];
		}
		arr = new T[currentSize + 1];
		for (int i = 0; i < currentSize; i++)
		{
			List<T>::arr[i] = temp[i];
		}
		arr[currentSize] = value;
		currentSize++; maxSize++;
	}
	~List()
	{
		delete[] arr;
		arr = nullptr;
	}
};

