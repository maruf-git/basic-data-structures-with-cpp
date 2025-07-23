// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    // list<int>l; // list is the stl of doubly linked list
    // list<int>l(10);
    // list<int> l(10, 3);
    list<int> l = {10, 20, 30, 40, 50};
    // cout << l.size() << endl;
    // cout << *l.begin() << endl;
    // print
    for (auto it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    for (auto u : l)
        cout << u << " ";
    cout << endl;

    // print value of any position
    cout << *next(l.begin(), 2) << endl;

    // insert at any position
    l.insert(next(l.begin(), 2), 100);
    
    for (auto u : l)
        cout << u << " ";
    cout << endl;

    return 0;
}
