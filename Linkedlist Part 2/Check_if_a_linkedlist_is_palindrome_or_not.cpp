#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        if (head == NULL)
            return head;

        ListNode *newNode = new ListNode(head->val);

        ListNode *curr1 = head->next;

        while (curr1 != NULL)
        {
            newNode = insertAtBegin(newNode, curr1->val);
            curr1 = curr1->next;
        }

        curr1 = head;
        ListNode *curr2 = newNode;

        while (curr1 != NULL && curr2 != NULL)
        {
            if (curr1->val != curr2->val)
                return false;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        return true;
    }

    ListNode *insertAtBegin(ListNode *head, int value)
    {
        ListNode *temporaryList = new ListNode(value);
        temporaryList->next = head;
        return temporaryList;
    }
};