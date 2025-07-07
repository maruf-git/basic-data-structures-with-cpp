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

void input_linkedlist(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void print_linkedList(Node *temp)
{
    cout << "Printing Linkedlist: " << endl;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

bool isSame(Node *head1, Node *head2)
{
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->val != head2->val)
            return false;
        head1 = head1->next;
        head2 = head2->next;
    }
    if (head1 == NULL && head2 == NULL)
        return true;
    else
        return false;
}

int main()
{

    Node *head1 = NULL;
    Node *tail1 = NULL;
    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;
        input_linkedlist(head1, tail1, n);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;
        input_linkedlist(head2, tail2, n);
    }
    bool result = isSame(head1, head2);
    if (result)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
