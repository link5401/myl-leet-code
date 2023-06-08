#include "../template.hpp"
/*
You are given an array prices where prices[i] is the price of a given stock on
the ith day.

You want to maximize your profit by choosing a single day to buy one stock and
choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot
achieve any profit, return 0.
*/
int maxProfit(vector<int>& prices) {
    int minPrice = INT32_MAX;
    int maxProfit = 0;
    for (int i = 0; i < prices.size(); i++) {
        if (prices[i] <= minPrice) minPrice = prices[i];
        if (prices[i] - minPrice >= maxProfit) maxProfit = prices[i] - minPrice;
    }
    return maxProfit;
}

int main() {
    vector<int> input{10, 9, 8, 4, 1};
    cout << maxProfit(input);
}