#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *curr1 = headA;
        ListNode *curr2 = headB;

        int length1 = 0, length2 = 0, diff, i = 1;

        while (curr1 != NULL)
        {
            length1++;
            curr1 = curr1->next;
        }
        while (curr2 != NULL)
        {
            length2++;
            curr2 = curr2->next;
        }

        curr1 = headA;
        curr2 = headB;

        if (length1 > length2)
        {
            diff = length1 - length2;
            while (i <= diff)
            {
                curr1 = curr1->next;
                i++;
            }
        }
        else if (length1 < length2)
        {
            diff = length2 - length1;
            while (i <= diff)
            {
                curr2 = curr2->next;
                i++;
            }
        }

        while (curr1 != NULL)
        {
            if (curr1 == curr2)
                return curr1;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }

        return NULL;
    }
};