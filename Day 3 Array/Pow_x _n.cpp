#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    double myPow(double x, int n)
    {
        long long power = n;
        double product = 1.0;

        if (power < 0)
        {
            power *= -1;
        }

        while (power > 0)
        {
            if (power & 1)
            {
                product *= x;
            }

            x *= x;
            power /= 2;
        }

        if (n < 0)
        {
            return (double)1.0 / (double)product;
        }

        return product;
    }
};