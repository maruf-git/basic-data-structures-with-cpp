// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;


class MyQueue
{
public:
    list<int>l;
   
    void push(int val) // o(1)
    {
        l.push_back(val);
    }

    void pop()
    {
       l.pop_front();
    }

    int front()
    {
        return l.front();
    }

    int back()
    {
        return l.back();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    int n;
    cin >> n;
    MyQueue q;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        q.push(a);
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
