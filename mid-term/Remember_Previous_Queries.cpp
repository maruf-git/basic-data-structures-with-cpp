// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int sz = 0;

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

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    // if (head == NULL)
    // {
    //     head = newNode;
    //     tail = head;
    //     sz++;
    //     return;
    // }
    if (head == tail)
    {
        if (head == NULL)
        {
            head = newNode;
            tail = head;
            sz++;
            return;
        }
        head = newNode;
        head->next = tail;
        tail->prev = head;
        sz++;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    sz++;
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == tail)
    {
        if (head == NULL)
        {
            head = newNode;
            tail = head;
            sz++;
            return;
        }
        tail = newNode;
        head->next = tail;
        tail->prev = head;
        sz++;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    sz++;
}

void delete_head(Node *&head, Node *&tail)
{
    if (head->next == NULL)
    {
        head = NULL;
        tail = NULL;
        sz--;
        return;
    }
    head = head->next;
    head->prev = NULL;
    sz--;
}
void delete_tail(Node *&head, Node *&tail)
{
    if (head == tail)
    {
        head = NULL;
        tail = NULL;
        sz--;
        return;
    }
    tail->prev->next = NULL;
    tail = tail->prev;
    sz--;
}
void delete_at_any(Node *temp, Node *&tail, int idx)
{

    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }

    temp->next->next->prev = temp;
    temp->next = temp->next->next;

    sz--;
}
void print_list_LR(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void print_list_RL(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
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
        // cout << x << " " << v << endl;
        if (x == 0)
        {
            insert_at_head(head, tail, v);
        }
        else if (x == 1)
        {
            insert_at_tail(head, tail, v);
        }
        else
        {
            if (v < sz)
            {
                if (v == 0)
                {
                    delete_head(head, tail);
                }
                else if (v == sz - 1)
                {
                    delete_tail(head, tail);
                }
                else
                {
                    delete_at_any(head, tail, v);
                }
            }
        }
        cout << "L -> ";
        print_list_LR(head);
        cout << "R -> ";
        print_list_RL(tail);
        // cout << "size: " << sz << endl;
    }

    return 0;
}
