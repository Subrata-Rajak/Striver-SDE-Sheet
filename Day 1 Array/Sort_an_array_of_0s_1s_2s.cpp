#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int count_0 = 0;
        int count_1 = 0;
        int count_2 = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                count_0++;
            if (nums[i] == 1)
                count_1++;
            if (nums[i] == 2)
                count_2++;
        }

        nums.clear();

        for (int i = 0; i < count_0; i++)
        {
            nums.push_back(0);
        }
        for (int i = 0; i < count_1; i++)
        {
            nums.push_back(1);
        }
        for (int i = 0; i < count_2; i++)
        {
            nums.push_back(2);
        }
    }
};