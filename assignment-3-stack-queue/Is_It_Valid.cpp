// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    // int countOne = 0, countZero = 0;
    // for (auto u : s)
    // {
    //     if (u == '0')
    //         countZero++;
    //     else
    //         countOne++;
    // }
    // if (countZero == countOne)
    //     cout << "YES" << endl;
    // else
    //     cout << "NO" << endl;

    stack<char> st;
    for (auto u : s)
        st.push(u);
    int cntZero = 0;
    while (st.size() != 0)
    {
        if (st.top() == '0')
            cntZero++;
        else
            cntZero--;
        st.pop();
    }
    if (cntZero == 0)
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
