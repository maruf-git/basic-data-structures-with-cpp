#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solve()
{
    string line;
    getline(cin, line);
    stringstream ss(line);
    map<string, int> mp;
    string ans = "";
    string word;
    while (ss >> word)
    {
        mp[word]++;
        // cout << word << endl;
        if (mp[word] > mp[ans])
        {
            ans = word;
        }
    }
    cout << ans << " " << mp[ans] << endl;
}

int main()
{
    int tst;
    cin >> tst;
    cin.ignore();
    while (tst--)
    {
        solve();
    }

    return 0;
}