/*
====================================
BEST TIME TO BUY AND SELL STOCK - I
LEETCODE: 121
====================================

👉 You can buy once and sell once
👉 Buy before sell

Example:
prices = [7,1,5,3,6,4]
Buy at 1, Sell at 6
Profit = 5

------------------------------------
LOGIC (VERY SIMPLE)
------------------------------------
1. Track minimum price so far
2. At each day:
   profit = price - minPrice
3. Store maximum profit
*/

int maxProfit(vector<int>& prices) {
    int minPrice = prices[0];   // best day to buy
    int maxProfit = 0;

    for (int i = 1; i < prices.size(); i++) {

        // update minimum buying price
        minPrice = min(minPrice, prices[i]);

        // calculate profit if sold today
        int profit = prices[i] - minPrice;

        // update maximum profit
        maxProfit = max(maxProfit, profit);
    }

    return maxProfit;
}

/*
TIME: O(n)
SPACE: O(1)
*/