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

int nodeCount = 0, maxDepth = 1;
set<int> st;
void recursion(Node *root, int depth)
{
    if (root == NULL)
        return;
    nodeCount++;
    if (root->left == NULL && root->right == NULL)
    {
        st.insert(depth);
        maxDepth = max(depth, maxDepth);
        return;
    }
    recursion(root->left, depth + 1);
    recursion(root->right, depth + 1);
}

int main()
{
    Node *root = input_binary_tree();
    recursion(root, 1);
    // cout << maxDepth << " " << nodeCount << endl;
    if (st.size() != 1)
        cout << "NO" << endl;
    else
    {
        int nodes = (int)pow(2, maxDepth) - 1;
        if (nodes == nodeCount)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
