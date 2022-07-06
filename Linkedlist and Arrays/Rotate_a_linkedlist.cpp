#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode *curr = head;
        int listLength = 0;

        while (curr != NULL)
        {
            listLength++;
            curr = curr->next;
        }

        k = k % listLength;

        for (int i = 0; i < k; i++)
        {
            head = rotateOnce(head);
        }

        return head;
    }

    ListNode *rotateOnce(ListNode *head)
    {
        ListNode *curr = head;

        while (curr->next->next != NULL)
            curr = curr->next;

        ListNode *temp = curr->next;
        curr->next = temp->next;
        temp->next = head;

        return temp;
    }
};