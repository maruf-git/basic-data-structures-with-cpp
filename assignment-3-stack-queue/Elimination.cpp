// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    stack<char> st;
    for (auto u : s)
        st.push(u);
    int cntOne = 0;

    while (st.size() != 0)
    {
        if (st.top() == '0')
        {
            cntOne--;
            if (cntOne < 0)
            {
                cout << "NO" << endl;
                return;
            }
        }
        else
        {
            cntOne++;
        }
        st.pop();
    }
    if (cntOne == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int tst;
    cin >> tst;
    while (tst--)
    {
        solve();
    }
    return 0;
}
