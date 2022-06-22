#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {

        vector<vector<int>> vec;

        for (int i = 1; i <= numRows; i++)
        {
            int num = 1;
            vector<int> innerVec;

            for (int j = 1; j <= i; j++)
            {
                innerVec.push_back(num);
                num = num * (i - j) / j;
            }

            vec.push_back(innerVec);
        }

        return vec;
    }
};