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

int ans = 0;
void sum_of_non_leaf_nodes(Node *root)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
        return;
    else
    {
        ans += root->val;
        sum_of_non_leaf_nodes(root->left);
        sum_of_non_leaf_nodes(root->right);
    }
}

int main()
{
    Node *root = input_binary_tree();
    sum_of_non_leaf_nodes(root);
    cout<< ans << endl;

    return 0;
}
// 10 20 30 40 -1 50 60 -1 -1 -1 -1 -1 -1 ans 2
// 6 3 5 -1 2 0 -1 -1 1 -1 -1 -1 -1 ans 3