#include<iostream>
#include"myQueue.h"
using namespace std;
template <class T>
myQueue <T> reverseQueue(myQueue<T>& q)
{
	if (!q.isEmpty())
	{
		T d=q.dequeue();
		reverseQueue(q);
		q.enqueue(d);
	}
	return q;
}

int main()
{
		cout << "\n\n---------- Best of Luck for the Exam ---------\n\n";
		myQueue<char> q1;
		q1.enqueue('D');
		q1.enqueue('S');
		q1.enqueue('A');
		q1.enqueue(' ');
		q1.enqueue('L');
		q1.enqueue('A');
		q1.enqueue('B');
		q1.display();
		myQueue<char> reverseQ1 = reverseQueue(q1);
		reverseQ1.display();
		return 0;
}
