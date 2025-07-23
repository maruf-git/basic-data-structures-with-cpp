// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n;
    list<int> lt;
    while (cin >> n)
    {
        if (n == -1)
            break;
        lt.push_back(n);
    }
    lt.sort();
    lt.unique();
    for (auto u : lt)
        cout << u << " ";

    return 0;
}
