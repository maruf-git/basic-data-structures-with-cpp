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

void print_linked_list(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void reverse_doubly_linked_list(Node *head, Node *tail)
{
    while (head != tail && head->prev != tail)
    {
        swap(head->val, tail->val);
        head = head->next;
        tail = tail->prev;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *tail = new Node(30);

    head->next = second;
    second->prev = head;
    second->next = tail;
    tail->prev = second;

    print_linked_list(head);
    cout << "after reverse" << endl;
    reverse_doubly_linked_list(head, tail);
    print_linked_list(head);

    return 0;
}
