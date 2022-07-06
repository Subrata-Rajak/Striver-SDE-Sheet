#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int size = nums.size();
        int limit = size / 2;

        unordered_map<int, int> uMap;

        for (int index = 0; index < size; index++)
            uMap[nums[index]]++;

        int count = 0;

        for (auto i : uMap)
        {
            if (i.second > limit)
            {
                return i.first;
            }
        }

        return 0;
    }
};