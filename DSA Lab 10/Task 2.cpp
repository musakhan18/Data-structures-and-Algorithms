#include<iostream>
using namespace std;
int q_series(int x)
{
    if (x<=1)
    {
        return(x);
    }
    if (x == 2)
    {
        return(x - 1);
    }
    else 
    {
        return q_series(x-1) + q_series(x -2) + q_series(x - 3);
    }
}
int main()
{
    int x;
    cout << "Enter n term of q-series: ";cin >> x;
    cout << endl;
   cout << "n term of q - series: " <<q_series(x-1);
   cout << endl;
}