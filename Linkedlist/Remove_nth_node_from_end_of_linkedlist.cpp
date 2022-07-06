#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *curr = head;

        int length = 0;

        while (curr != NULL)
        {
            length++;
            curr = curr->next;
        }

        curr = head;

        if (length == n)
        {
            ListNode *temp = curr->next;
            delete (curr);
            return temp;
        }

        while (curr != NULL)
        {
            if ((length - 1) == n)
            {
                ListNode *temp = curr->next;
                curr->next = temp->next;
                delete (temp);
                return head;
            }
            length--;
            curr = curr->next;
        }

        return head;
    }
};