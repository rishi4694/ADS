#include <bits/stdc++.h>
using namespace std;
class Stack
{
    vector<int> item;
    int top;
public:
    Stack(int s)
    {
        item.resize(s);
        top = -1;
    }
/************************************/
    void Push(int x)
    {
        if (top == item.size() - 1)
        {
            cout << "Stack Overflow";
            exit(1);
        }

        item[++top] = x;
    }
/************************************/
    int Pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow";
            exit(1);
        }
        return item[top--];
    }
/************************************/
    bool IsEmpty()
    {
        return top == -1;
    }
};
/************************************/
int main()
{
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    if (n == 0)
    {
        cout << "Hexadecimal = 0";
        return 0;
    }
    Stack S(20);

    while (n > 0)
    {
        S.Push(n % 16);
        n = n / 16;
    }

    cout << "Hexadecimal = ";

    while (!S.IsEmpty())
    {
        int x = S.Pop();
        if (x < 10)
            cout << x;
        else
            cout << char(x - 10 + 'A');
    }
    return 0;
}
