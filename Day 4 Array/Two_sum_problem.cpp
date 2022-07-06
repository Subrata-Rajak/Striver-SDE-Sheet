#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ansList;
        int size = nums.size();

        for (int index = 0; index < size; index++)
        {
            for (int index2 = index + 1; index2 < size; index2++)
            {
                if ((nums[index] + nums[index2]) == target)
                {
                    ansList.push_back(index);
                    ansList.push_back(index2);
                    return ansList;
                }
            }
        }
        return ansList;
    }
};