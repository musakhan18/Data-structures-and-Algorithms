template <class T>
class Queue
{
protected:
	int rear;
	int front;
	int max_size;
	int no_of_elements;
	T * arr;
public:
	virtual void enqueue(T)=0;
	virtual T dequeue()=0;
	virtual bool isempty()=0;
	virtual bool isfull()=0;
	virtual int size() = 0;
	virtual T Front() = 0;
	virtual T* GetQueue() = 0;
};