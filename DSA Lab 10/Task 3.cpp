#include<iostream>
using namespace std;
int product(int x, int y)
{
    if (y != 0)
    {
        return (x + product(x, y - 1));
    }
    else
    {
        return 0;
    }
}

int main()
{
    cout << "Product: " << product(2, 6) << endl;
    return 0;
}