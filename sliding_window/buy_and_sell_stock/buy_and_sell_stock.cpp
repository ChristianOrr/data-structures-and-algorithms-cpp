/*
easy

You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and
choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.


Example 1:
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

Example 2:
Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.


Solution 1
Time complexity: O(n), Space complexity: O(n)
Strategy:
Use two pointers starting adjacent to each other on the left.
Create a variable to keep track of the max profit.
Increment the right pointer each step. Check if the right value is less than the left.
If it is then move the left pointer into the rights position, else
update the max profit if it is greater than the current profit.
After the loop return the max profit.

Video:
https://www.youtube.com/watch?v=1pkOgXD63yU&ab_channel=NeetCode
*/
#include "buy_and_sell_stock.h"
#include <vector>


int maxProfit(std::vector<int>& prices) {
    unsigned max_profit = 0;
    unsigned left = 0;
    unsigned right = 1;

    while (right != prices.size()) {
        int left_value = prices.at(left);
        int right_value = prices.at(right);
        if (right_value < left_value) {
            left = right;
        } else {
            unsigned diff = right_value - left_value;
            if (diff > max_profit) {
                max_profit = diff;
            }
        }
        right += 1;
    }
    return max_profit;

}


