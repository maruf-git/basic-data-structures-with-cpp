#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    int n;
    cin >> n;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        st.insert(a);
    }
    for (auto u : st)
        cout << u << " ";
    cout << endl;
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