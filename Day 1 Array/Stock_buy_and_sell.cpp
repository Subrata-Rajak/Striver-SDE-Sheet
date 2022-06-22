#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int size = prices.size();

        int minStockSoFar = INT_MAX, maxProfit = INT_MIN, currentProfit = 0;

        for (int index = 0; index < size; index++)
        {
            minStockSoFar = prices[index] < minStockSoFar ? prices[index] : minStockSoFar;

            currentProfit = abs(minStockSoFar - prices[index]);

            maxProfit = maxProfit > currentProfit ? maxProfit : currentProfit;
        }

        return maxProfit;
    }
};