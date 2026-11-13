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
        cout << "Binary = 0";
        return 0;
    }
    Stack S(32);
    while (n > 0)
    {
        S.Push(n % 2);
        n = n / 2;
    }
    cout << "Binary = ";
    while (!S.IsEmpty())
    {
        cout << S.Pop();
    }
    return 0;
}
