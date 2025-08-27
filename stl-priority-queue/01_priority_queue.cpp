#include <bits/stdc++.h>
using namespace std;

// Internal Working
// Priority queue container provides the built-in implementation of a binary heap data structure. There can be two types of heaps,

// Max-heap in which the priority is given to the largest element. (Default)
// Min-heap in which the priority is given to the smallest element.

void print(priority_queue<int>pq){
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
}

int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(6);
    cout << pq.top() << endl;

    // creating priority queue from other container
    vector<int> v = {1, 2, 3, 4, 3, 10};
    priority_queue<int> pqc(v.begin(), v.end());
    print(pqc);

    return 0;
}