#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        pq.push(a);
    }
    int queries;
    cin >> queries;
    while (queries--)
    {
        int a;
        cin >> a;
        if (a == 0)
        {
            int val;
            cin >> val;
            pq.push(val);
            cout << pq.top() << endl;
        }
        else if (a == 1)
        {
            if (pq.size() == 0)
                cout << "Empty" << endl;
            else
                cout << pq.top() << endl;
        }
        else if (a == 2)
        {
            if (pq.size() != 0)
                pq.pop();
            if (pq.size() == 0)
                cout << "Empty" << endl;
            else
                cout << pq.top() << endl;
        }
    }
    return 0;
}