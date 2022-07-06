#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_set<int> sequence(nums.begin(), nums.end());

        int longest_sequence_length = 0, size = nums.size();

        for (int i = 0; i < size; i++)
        {
            if (sequence.find(nums[i] - 1) != sequence.end())
                continue;

            else
            {
                int curr_sequence_length = 0;
                int current_element = nums[i];

                while (sequence.find(current_element) != sequence.end())
                {
                    curr_sequence_length++;
                    current_element++;
                }

                longest_sequence_length = max(longest_sequence_length, curr_sequence_length);
            }
        }

        return longest_sequence_length;
    }
};