// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string s;
    list<string> lt;
    while (cin >> s)
    {
        if (s == "end")
            break;
        lt.push_back(s);
    }
    int tst;
    cin >> tst;
    list<string>::iterator it = lt.end();
    while (tst--)
    {
        string cmd;
        cin >> cmd;
        if (cmd == "visit")
        {
            string search;
            cin >> search;
            if (find(lt.begin(), lt.end(), search) != lt.end())
            {
                it = find(lt.begin(), lt.end(), search);
                cout << *it << endl;
            }
            else
            {
                cout << "Not Available" << endl;
            }
        }
        else if (cmd == "prev")
        {
            if (it == lt.begin())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                --it;
                cout << *it << endl;
            }
        }
        else
        {
            if (it == (--lt.end()) || it == lt.end())
            {
                cout << "Not Available" << endl;
            }
            else
            {
                it++;
                cout << *it << endl;
            }
        }
    }

    return 0;
}
