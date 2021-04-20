#include<iostream>
using namespace std;
int main()
{
	const int N = 10;
	int A[N];
	int SmallSub = 0;
	cout << "Enter Array" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> A[i];
	}
	cout << "Array Before sort" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << A[i] << " ";
	}
	for (int i = 0; i < N; i++)
	{
		SmallSub = i;
		for (int j = i+1; j < N; j++)
		{
			if (A[j] < A[SmallSub])
			{
				SmallSub = j;
			}
		}
		swap(A[i], A[SmallSub]);
	}
	cout << endl;
	cout << "Array after sort" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}