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

vector<vector<int>> v;
void levelOrder(Node *root)
{
    if (root == NULL)
        return;

    queue<Node *> q;
    q.push(root);
    while (q.size() != 0)
    {
        int q_size = q.size();
        vector<int> nodes;

        for (int i = 0; i < q_size; i++)
        {
            Node *f = q.front();
            q.pop();

            if (f->left)
                q.push(f->left);
            if (f->right)
                q.push(f->right);
            nodes.push_back(f->val);
        }
        v.push_back(nodes);
    }
}

int main()
{
    Node *root = input_binary_tree();
    int idx;
    cin >> idx;
    levelOrder(root);
    // cout<<"i: "<<idx<<endl;
    if (idx >= v.size())
        cout << "Invalid" << endl;
    else
        for (int i = 0; i < v[idx].size(); i++)
            cout << v[idx][i] << " ";
    return 0;
}
