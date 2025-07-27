// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int tst;
    cin >> tst;
    queue<string> q;
    while (tst--)
    {
        int a;
        cin >> a;
        if (a == 0)
        {
            string s;
            cin >> s;
            q.push(s);
        }
        else
        {
            if (q.empty())
                cout << "Invalid" << endl;
            else
            {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }
    return 0;
}
