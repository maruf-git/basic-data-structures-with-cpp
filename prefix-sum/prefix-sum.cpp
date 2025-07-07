// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    long long int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    long long int pfs[n + 1]; // prefix sum array
    pfs[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        pfs[i] = pfs[i - 1] + arr[i - 1];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << pfs[r] - pfs[l - 1] << endl;
    }
    return 0;
}
