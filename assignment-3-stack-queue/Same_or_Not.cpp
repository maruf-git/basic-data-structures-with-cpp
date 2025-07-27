// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    stack<int> st;
    queue<int> q;
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
