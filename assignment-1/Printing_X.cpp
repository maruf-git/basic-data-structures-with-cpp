#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n + 1][n + 1];
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            if (i == j && n / 2 + 1 == i)
                cout << "X";
            else if (i == j)
                cout << "\\";
            else if (i + j == n + 1)
                cout << "/";
            else
                cout << " ";
        }
        cout << endl;
    }
}