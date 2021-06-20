#include<iostream>
using namespace std;
int sum_of_digit(int num)
{
    if (num != 0)
    {
        return (num % 10 + sum_of_digit(num / 10));
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    cout << "Enter num: "; cin >> num;
    int result = sum_of_digit(num);
    cout << "Sum of num " << num << ": " << result << endl;
}