// best time to sell and buy a product
#include <bits/stdc++.h>
using namespace std;
int stockmarket(int prices[], int n)
{
    int buy = prices[0], max_profit = 0;
    for (int i = 1; i < n; i++) {
 
        // Checking for lower buy value
        if (buy > prices[i])
            buy = prices[i];
 
        // Checking for higher profit
        else if (prices[i] - buy > max_profit)
            max_profit = prices[i] - buy;
    }
    return max_profit;
}
 
int main()
{
    int prices[] = {7, 1, 5, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);
    int max_profit = stockmarket(prices, n);
    cout << max_profit << endl;
    return 0;
}