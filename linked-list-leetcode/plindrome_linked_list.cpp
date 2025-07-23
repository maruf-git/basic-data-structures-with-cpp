// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

//   Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    vector<int> v;
    void reverse(ListNode* temp) {
        if (temp == NULL)
            return;
        reverse(temp->next);
        v.push_back(temp->val);
    }
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        reverse(temp);
        int i = 0;
        while (temp != NULL) {
            if (temp->val != v[i]) {
                return false;
            }
            i++;
            temp = temp->next;
        }
        return true;
    }
};

int main()
{

    return 0;
}
