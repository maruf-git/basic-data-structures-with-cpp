// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class MyStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int len = 0;

    void push(int val) // o(1)
    {
        Node *newNode = new Node(val);
        len++;
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop() // O(1)
    {
        Node *deleteNode = tail;
        len--;
        tail = tail->prev;
        delete deleteNode;
        if (tail == NULL)
        {
            head = NULL;
            return;
        }
        tail->next = NULL;
    }

    int top()
    {
        return tail->val;
    }

    int size()
    {
        return len;
    }

    bool empty()
    {
        return len <= 0;
    }
};

int main()
{

    MyStack st;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int a;cin>>a;
        st.push(a);
    }

    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }


    return 0;
}
