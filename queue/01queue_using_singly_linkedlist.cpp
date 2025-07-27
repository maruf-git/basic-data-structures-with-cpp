// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class MyQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz=0;

    void push(int val) // o(1)
    {
        Node *newNode = new Node(val);
        sz++;
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void pop(){
        Node* deleteNode = head;
        sz--;
        head=head->next;
        delete deleteNode;
        if(head==NULL)tail=NULL;
    }

    int front(){
        return head->val;
    }

    int back(){
        return tail->val;
    }

    int size(){
        return sz;
    }

    bool empty(){
        return sz<=0;
    }
};

int main()
{
    int n;
    cin>>n;
    MyQueue q;
    for(int i=0; i<n; i++){
        int a;cin>>a;
        q.push(a);
    }

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}
