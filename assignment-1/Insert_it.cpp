#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    int m;
    cin >> m;
    vector<int> v2(m);
    for (int i = 0; i < m; i++)
        cin >> v2[i];
    int idx;
    cin >> idx;
    v1.insert(v1.begin() + idx, v2.begin(), v2.end());
    for (auto u : v1)
        cout << u << " ";

    return 0;
}