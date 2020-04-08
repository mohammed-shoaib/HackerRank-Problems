/*
Problem Statement: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, min_p = numeric_limits<int>::max();
		for (int price: prices) {
			min_p = min(price, min_p);
			profit = max(price - min_p, profit);
		}
		return profit;
    }
};