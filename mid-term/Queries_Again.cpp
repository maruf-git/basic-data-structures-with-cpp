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

// void insert_at_the_tail(Node *&head, Node *&tail, int val)
// {
//     Node *newNode = new Node(val);
//     if (head == NULL)
//     {
//         head = newNode;
//         tail = head;
//         sz++;
//         return;
//     }
//     if (head == tail)
//     {
//         tail = newNode;
//         tail->prev = head;
//         head->next = tail;
//         sz++;
//         return;
//     }
//     newNode->prev = tail;
//     tail->next = newNode;
//     tail = newNode;
//     sz++;
// }

void insert_at_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = head;
        sz++;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    sz++;
}

void insert_at_tail(Node *&tail, int val)
{
    Node *newNode = new Node(val);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    sz++;
}

void insert_at_any(Node *temp, int idx, int val)
{
    Node *newNode = new Node(val);
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }
    temp->next->prev = newNode;
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
    sz++;
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
        if (x > sz)
            cout << "Invalid" << endl;
        else
        {
            if (x == 0)
            {
                insert_at_head(head, tail, v);
                cout << "L -> ";
                print_list_LR(head);
                cout << "R -> ";
                print_list_RL(tail);
            }
            else if (x == sz)
            {
                insert_at_tail(tail, v);
                cout << "L -> ";
                print_list_LR(head);
                cout << "R -> ";
                print_list_RL(tail);
            }
            else
            {

                insert_at_any(head, x, v);
                cout << "L -> ";
                print_list_LR(head);
                cout << "R -> ";
                print_list_RL(tail);
            }
        }
    }

    return 0;
}
