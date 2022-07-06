#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        int size = nums.size();
        vector<vector<int>> sum_vector;

        if (size < 3)
            return sum_vector;

        sort(nums.begin(), nums.end());
        int low, high;

        for (int i = 0; i < size; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
            {
                continue;
            }

            low = i + 1;
            high = size - 1;

            while (low < high)
            {
                int k = nums[i] + nums[low] + nums[high];
                if (k > 0)
                {
                    high -= 1;
                }
                else if (k < 0)
                {
                    low += 1;
                }
                else
                {
                    sum_vector.push_back({nums[i], nums[low], nums[high]});
                    low += 1;
                    while (nums[low] == nums[low - 1] && low < high)
                        low++;
                }
            }
        }
        return sum_vector;
    }
};