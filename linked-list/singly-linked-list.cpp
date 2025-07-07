#include <bits/stdc++.h>
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

int main()
{
    // Dynamic Node
    Node *head = new Node(10); // new keyword accesss heap memory
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    head->next = a;
    a->next = b;
    b->next = c;
    // c->next = NULL; it is automatic set to NULL as it was created by using constructor
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->val << endl;
        ptr = ptr->next;
    }

    return 0;
}