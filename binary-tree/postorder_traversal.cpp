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

void postorder_traversal(Node *root)
{
    if (root == NULL)
        return;
    postorder_traversal(root->left); // left
    postorder_traversal(root->right); // right
    cout << root->val << " "; // print in root
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

    postorder_traversal(root);

    return 0;
}
