#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tst;
    cin >> tst;
    while (tst--)
    {
        int n;
        cin >> n;
        vector<int> v(n), sorted(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sorted[i] = v[i];
        }
        sort(sorted.begin(), sorted.end());
        bool isSorted = true;
        for (int i = 0; i < n; i++)
        {
            if (sorted[i] != v[i])
            {
                isSorted = false;
                break;
            }
        }
        if (isSorted)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}