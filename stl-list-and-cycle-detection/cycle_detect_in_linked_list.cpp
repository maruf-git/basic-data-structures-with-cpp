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

void printf_linked_list(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// detect cycle in linked list
// hare and tortoise algorithm
// or slow and fast algorithm
// or Floyd’s Cycle Detection Algorithm

bool hasCycle(Node *temp)
{
    bool present = false;
    Node *hare = temp;
    Node *tortoise = temp;
    while (hare != NULL && hare->next!=NULL)
    {
        tortoise = tortoise->next;
        hare = hare->next->next;
        if (hare == tortoise)
        {
            present = true;
            break;
        }
    }
    return present;
}

int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *tail = new Node(50);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = tail;
    tail->next=second;


    if (hasCycle(head))
    {
        cout << "The linked list has cycle" << endl;
    }
    else
        cout << "The linked list has no cycle" << endl;

    return 0;
}
