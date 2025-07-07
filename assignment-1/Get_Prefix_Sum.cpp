#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    long long int pfs[n];
    pfs[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        pfs[i] = pfs[i - 1] + arr[i];
    }
    reverse(pfs, pfs + n);
    for (auto u : pfs)
        cout << u << " ";
    cout << endl;

    return 0;
}