// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class MyStack
{
public:
    list<int> l;

    void push(int val)
    {
        l.push_back(val);
    }

    void pop()
    {
        l.pop_back();
    }

    int top()
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

class MyQueue
{
public:
    list<int> l;

    void push(int val)
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
    int n, m;
    cin >> n >> m;
    MyStack st;
    MyQueue q;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        st.push(a);
    }
    for (int i = 0; i < m; i++)
    {
        int a;
        cin >> a;
        q.push(a);
    }
    if (n != m)
        cout << "NO" << endl;
    else
    {
        while (st.size() != 0 && q.size() != 0)
        {
            if (st.top() != q.front())
            {
                cout << "NO" << endl;
                return 0;
            }
            st.pop();
            q.pop();
        }
        cout << "YES" << endl;
    }

    return 0;
}
