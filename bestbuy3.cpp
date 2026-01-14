/*
====================================
BEST TIME TO BUY AND SELL STOCK - III
LEETCODE: 123
====================================

👉 You can do at most TWO transactions

------------------------------------
LOGIC (BEGINNER FRIENDLY)
------------------------------------
We track:
1. First Buy
2. First Sell
3. Second Buy
4. Second Sell
*/

int maxProfit(vector<int>& prices) {
    int buy1 = INT_MIN;   // max money after first buy
    int sell1 = 0;        // max profit after first sell
    int buy2 = INT_MIN;   // max money after second buy
    int sell2 = 0;        // max profit after second sell

    for (int price : prices) {

        buy1 = max(buy1, -price);          // buy first stock
        sell1 = max(sell1, buy1 + price);  // sell first stock

        buy2 = max(buy2, sell1 - price);   // buy second stock
        sell2 = max(sell2, buy2 + price);  // sell second stock
    }

    return sell2;
}

/*
TIME: O(n)
SPACE: O(1)
*/