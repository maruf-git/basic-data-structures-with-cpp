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

void print_linkedList(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
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
    tail = newNode;
}

bool isValidIndex(Node *temp, int idx)
{
    int i = 0;
    while (temp != NULL)
    {
        i++;
        temp = temp->next;
    }
    return idx < i;
}
void delete_at_index(Node *&head, Node *&tail, int idx)
{
    if (head == NULL)
        return;

    if (idx == 0)
    {
        Node *deleteNode = head;
        head = head->next;
        if (head == NULL)
            tail = NULL;
        delete deleteNode;
        return;
    }
    Node *temp = head;
    for (int i = 0; i < idx - 1; i++)
    {
        if (temp == NULL || temp->next == NULL)
            return;
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    temp->next = deleteNode->next;
    if (deleteNode == tail)
        tail = temp;

    delete deleteNode;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int tst;
    cin >> tst;
    while (tst--)
    {
        int x, v;
        cin >> x >> v;
        // cout<<x<<" "<<v;
        if (x == 0)
            insert_at_head(head, tail, v);
        else if (x == 1)
            insert_at_tail(head, tail, v);
        else if (x == 2)
        {
            bool result = isValidIndex(head, v);
            if (result)
                delete_at_index(head, tail, v);
        }
        print_linkedList(head);
        cout << endl;
    }
    return 0;
}
