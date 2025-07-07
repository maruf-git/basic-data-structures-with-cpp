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

int max_in_linked_list(Node *temp)
{
    int mx = INT_MIN;
    while (temp != NULL)
    {
        mx = max(mx, temp->val);
        temp = temp->next;
    }
    return mx;
}
int min_in_linked_list(Node *temp)
{
    int mn = INT_MAX;
    while (temp != NULL)
    {
        mn = min(mn, temp->val);
        temp = temp->next;
    }
    return mn;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int n;
        cin >> n;
        if (n == -1)
            break;
        input_linkedlist(head, tail, n);
    }
    cout << abs(max_in_linked_list(head) - min_in_linked_list(head));

    return 0;
}
