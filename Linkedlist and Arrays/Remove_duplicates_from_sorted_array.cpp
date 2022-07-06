#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &array)
    {
        int arraySize = array.size();
        int tempIndx = 1;

        for (int i = 1; i < arraySize; i++)
        {
            if (array[tempIndx - 1] != array[i])
            {
                array[tempIndx] = array[i];
                tempIndx++;
            }
        }

        return tempIndx;
    }
};