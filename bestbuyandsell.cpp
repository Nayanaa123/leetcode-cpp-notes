/*
====================================
BEST TIME TO BUY AND SELL STOCK - II
LEETCODE: 122
====================================

👉 You can buy and sell multiple times
👉 But only hold ONE stock at a time

Example:
prices = [7,1,5,3,6,4]
Profit = (5-1) + (6-3) = 7

------------------------------------
LOGIC
------------------------------------
Whenever price goes UP → take profit
Just add all positive differences
*/

int maxProfit(vector<int>& prices) {
    int profit = 0;

    for (int i = 1; i < prices.size(); i++) {
        if (prices[i] > prices[i - 1]) {
            profit += prices[i] - prices[i - 1];
        }
    }

    return profit;
}

/*
TIME: O(n)
SPACE: O(1)
*/