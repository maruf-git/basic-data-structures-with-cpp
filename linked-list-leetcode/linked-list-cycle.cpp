// In The Name of Allah
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
     bool hasCycle(ListNode *head) {
        // slow and fast algorithm/ hare and tortoise algorithm
        ListNode *slow = head;
        ListNode *fast = head;
        bool present = false;
        while (fast != NULL && fast->next!=NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                present = true;
                break;
            }
        }
        return present;
    }
};

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    return 0;
}
