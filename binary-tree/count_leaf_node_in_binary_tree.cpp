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

Node *input_binary_tree()
{
    int val;
    cin >> val;
    Node *root;
    // handling corner case
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);

    while (q.size() != 0)
    {
        // ber kore nibo
        Node *p = q.front();
        q.pop();

        // oi node ke niye kaj
        int left, right;
        cin >> left >> right;
        Node *leftNode;
        Node *rightNode;
        if (left == -1)
            leftNode = NULL;
        else
            leftNode = new Node(left);
        if (right == -1)
            rightNode = NULL;
        else
            rightNode = new Node(right);

        p->left = leftNode;
        p->right = rightNode;

        // queue a push kore dibo
        if (p->left != NULL)
            q.push(p->left);
        if (p->right != NULL)
            q.push(p->right);
    }
    return root;
}

void levelorder_traversal(Node *root)
{
    if (root == NULL)
    {
        cout << "No Tree" << endl;
        return;
    }
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

void preorder_traversal(Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}

int count_leaf_nodes(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return 1;
    int l = count_leaf_nodes(root->left);
    int r = count_leaf_nodes(root->right);
    return l + r;
}

int main()
{
    Node *root = input_binary_tree();
    levelorder_traversal(root);
    cout << endl;
    preorder_traversal(root);
    cout << endl;
    cout << (count_leaf_nodes(root));
    return 0;
}
