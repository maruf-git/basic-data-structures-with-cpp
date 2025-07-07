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

int isValueMatched(Node *temp, int find_val)
{
    int idx = -1;
    int i = 0;
    while (temp != NULL)
    {
        if (temp->val == find_val)
        {
            idx = i;
            break;
        }
        temp = temp->next;
        i++;
    }
    return idx;
}

int main()
{
    int tst;
    cin >> tst;
    while (tst--)
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
        int find_val;
        cin >> find_val;
        int idx = isValueMatched(head, find_val);
        cout << idx << endl;
    }
    return 0;
}
