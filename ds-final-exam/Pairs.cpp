#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool cmp(pair<string, int> l, pair<string, int> r)
{
    if (l.first < r.first)
        return true;
    else if (l.first > r.first)
        return false;
    else
        return l.second > r.second;
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<string, int>> vp;
    for (int i = 0; i < n; i++)
    {
        string s;
        int val;
        cin >> s >> val;
        vp.push_back({s, val});
    }
    sort(vp.begin(), vp.end(), cmp);
    for (auto u : vp)
    {
        cout << u.first << " " << u.second << endl;
    }
}

int main()
{

    solve();

    return 0;
}