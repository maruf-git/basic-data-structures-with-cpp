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

void print_linked_list(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void reverse_linked_list(Node *&head, Node *&tail, Node *temp)
{

    if (temp->next == NULL)
    {
        head = temp;
        return;
    }
    reverse_linked_list(head, tail, temp->next);
    temp->next->next = temp;
    temp->next = NULL;
    tail = temp;
}

int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *tail = new Node(30);
    head->next = second;
    second->next = tail;

    print_linked_list(head);

    cout << "Reverse linked list using recursion:" << endl;
    reverse_linked_list(head, tail, head);
    print_linked_list(head);
    return 0;
}
