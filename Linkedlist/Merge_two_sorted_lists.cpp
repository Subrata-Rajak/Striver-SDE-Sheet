#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (list1 == NULL && list2 == NULL)
            return NULL;
        else if (list1 == NULL && list2 != NULL)
            return list2;
        else if (list1 != NULL && list2 == NULL)
            return list1;

        ListNode *head1 = list1;
        ListNode *head2 = list2;

        while (head2 != NULL)
        {
            int temp = head2->val;
            head1 = sortedInsert(head1, temp);
            head2 = head2->next;
        }

        return head1;
    }

    ListNode *sortedInsert(ListNode *head, int value)
    {
        ListNode *temp = new ListNode(value);

        if (value < head->val)
        {
            temp->next = head;
            return temp;
        }

        ListNode *curr = head;

        while (curr->next != NULL && curr->next->val < value)
            curr = curr->next;

        temp->next = curr->next;
        curr->next = temp;
        return head;
    }
};