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

void insert_at_the_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = head;
        return;
    }
    if (head == tail)
    {
        tail = newNode;
        tail->prev = head;
        head->next = tail;
        return;
    }
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

void print_list(Node *temp)
{
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool isPalindrome(Node *head, Node *tail)
{
    // if(head==tail)return true;
    while (head->prev != tail && head != tail)
    {
        if (head->val != tail->val)
        {
            return false;
        }
        else
        {
            head = head->next;
            tail = tail->prev;
        }
    }
    return true;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int n;
    while (cin >> n)
    {
        if (n == -1)
            break;
        insert_at_the_tail(head, tail, n);
    }
    // print_list(head);
    // cout<<head->val<<endl;
    // cout<<tail->val<<endl;

    if (isPalindrome(head, tail))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
