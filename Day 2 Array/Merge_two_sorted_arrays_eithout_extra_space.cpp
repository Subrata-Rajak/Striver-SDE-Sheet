#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        int index = 0;

        while (index < m)
        {
            nums2.push_back(nums1[index]);
            index++;
        }

        sort(nums2.begin(), nums2.end());
        nums1 = nums2;
    }
};