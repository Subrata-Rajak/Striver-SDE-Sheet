#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int sizeOfS = s.size(), sizeOfT = t.size();

        vector<int> count;
        count.assign(256, 0);

        for (int index = 0; s[index] && t[index]; index++)
        {
            count[s[index]]++;
            count[t[index]]--;
        }

        if (sizeOfS != sizeOfT)
            return false;
        else
        {
            for (int index = 0; index < count.size(); index++)
                if (count[index])
                    return false;
        }

        return true;
    }
};