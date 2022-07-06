#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int romanToInt(string str)
    {
        int num = 0;

        int len = str.length();

        for (int index = 0; index < len; index++)
        {
            if (str[index] == 'I' && str[index + 1] == 'V')
            {
                num += 4;
                index++;
            }
            else if (str[index] == 'I' && str[index + 1] == 'X')
            {
                num += 9;
                index++;
            }
            else if (str[index] == 'X' && str[index + 1] == 'L')
            {
                num += 40;
                index++;
            }
            else if (str[index] == 'X' && str[index + 1] == 'C')
            {
                num += 90;
                index++;
            }
            else if (str[index] == 'C' && str[index + 1] == 'D')
            {
                num += 400;
                index++;
            }
            else if (str[index] == 'C' && str[index + 1] == 'M')
            {
                num += 900;
                index++;
            }
            else if (str[index] == 'I')
                num += 1;
            else if (str[index] == 'V')
                num += 5;
            else if (str[index] == 'X')
                num += 10;
            else if (str[index] == 'L')
                num += 50;
            else if (str[index] == 'C')
                num += 100;
            else if (str[index] == 'D')
                num += 500;
            else if (str[index] == 'M')
                num += 1000;
        }

        return num;
    }
};