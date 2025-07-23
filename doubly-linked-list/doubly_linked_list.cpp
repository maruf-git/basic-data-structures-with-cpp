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

void print_forward(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backward(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
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

void insert_at_any_position(Node *head, Node *tail, int val, int pos)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    newNode->next->prev = newNode;
    temp->next = newNode;
}

void delete_at_head(Node *&head, Node *&tail)
{
    Node *deleteNode = head;
    if (head == tail)
    {
        head = NULL;
        tail = NULL;
        delete deleteNode;
        return;
    }
    head = head->next;
    head->prev = NULL;
    delete deleteNode;
}

void delete_at_tail(Node *&head, Node *&tail)
{
    Node *deleteNode = tail;
    if (head == tail)
    {
        head = NULL;
        tail == NULL;
        delete deleteNode;
        return;
    }
    tail = tail->prev;
    tail->next = NULL;
    delete deleteNode;
}

void delete_at_any(Node *&head, Node *&tail, int idx)
{
    Node *temp = head;
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deleteNode;
}



int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;
    a->prev = head;

    a->next = tail;
    tail->prev = a;

    // print_forward(head);
    // print_backward(tail);

    // cout << "Insert at head: " << endl;
    // insert_at_head(head, tail, 50);

    // print_forward(head);
    // print_backward(tail);

    // cout << "Insert at tail: " << endl;
    // insert_at_tail(head, tail, 100);
    // print_forward(head);
    // print_backward(tail);

    // insert_at_any_position(head, tail, 100, 3);
    delete_at_tail(head, tail);
    print_forward(head);

    return 0;
}
