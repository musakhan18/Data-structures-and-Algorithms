#include<iostream>
#include<string>
#include"Stack.h"
#include"Queue.h"
using namespace std;
template <class T>
void display(Queue<T>);
int main()
{
    string s;
    Stack<int> Sobj;
    Queue<int>Qobj;
    cout << "Enter string: "; cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]!='*')
        {
            Sobj.AddElement(s[i]);
        }
        else
        {
            int num1 = Sobj.RemoveElement();
            int num2 = Sobj.RemoveElement();
            int mul = (num1 - 48) * (num2 - 48);
            Qobj.enqueue(mul);
        }
    }
    display(Qobj);
}
template <class T>
void display(Queue<T>obj)
{
    for (int i = 0; i < obj.size(); i++)
    {
        cout << obj.Getarr()[i] << " ";
    }
    cout << endl;
}