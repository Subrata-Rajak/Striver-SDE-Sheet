#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {

        int maxCount = 0, currentCount = 0;

        int i = 0;

        while (i < nums.size())
        {

            if (nums[i] == 1)
            {
                currentCount++;
            }
            else if (nums[i] == 0)
            {
                i += 1;

                currentCount = 0;
                continue;
            }

            if (currentCount > maxCount)
                maxCount = currentCount;

            i++;
        }
        return maxCount;
    }
};