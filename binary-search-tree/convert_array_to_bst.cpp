#include <bits/stdc++.h>
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

void levelorder(Node *root)
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
Node *convertBst(int arr[], int n, int l, int r)
{
    if(l>r) return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(arr[mid]);
    Node *leftroot = convertBst(arr, n, l, mid - 1);
    Node *rightroot = convertBst(arr, n, mid + 1, r);
    root->left = leftroot;
    root->right = rightroot;
    return root;
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    Node *root = convertBst(arr, n, 0, n - 1);
    levelorder(root);

    return 0;
}

// Local Farmers Marketplace Database
// Village Microfinance & Loan Management