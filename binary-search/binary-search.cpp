// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n, search;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    cin >> search;
    int l = 0, r = n - 1, idx = -1;
    while (l <= r)
    {
        int mid = (r + l) / 2;
        if (arr[mid] < search)
        {
            l = mid + 1;
        }
        else if (arr[mid] > search)
        {
            r = mid - 1;
        }
        else
        {
            idx = mid;
            break;
        }
    }
    if (idx != -1)
        cout << "Found";
    else
        cout << "Not Found";
    return 0;
}
