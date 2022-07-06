#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void deleteNode(ListNode *node)
    {
        ListNode *curr = node;

        curr->val = curr->next->val;
        ListNode *temp = curr->next;
        curr->next = temp->next;
        delete (temp);
    }
};