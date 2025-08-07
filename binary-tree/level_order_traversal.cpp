// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void levelorder_traversal_with_recursion(queue<Node *> q)
{
    if (q.front() == NULL || q.size() == 0)
        return;
    int val = q.front()->val;
    cout << val << " ";
    Node *left = q.front()->left;
    Node *right = q.front()->right;
    q.pop();
    q.push(left);
    q.push(right);
    levelorder_traversal_with_recursion(q);
}

void levelorder_traversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        cout << f->val << " ";
        q.pop();
        if (f->left != NULL)
            q.push(f->left);
        if (f->right != NULL)
            q.push(f->right);
    }
}

int main()
{
    //         10
    //        /  \ 
    //      20    30
    //     /  \    \
    //    40   50  60
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = d;
    b->right = e;
    // level order traversal with recursion
    // queue<Node *> q;
    // q.push(root);
    // levelorder_traversal_with_recursion(q);

    levelorder_traversal(root);

    return 0;
}
