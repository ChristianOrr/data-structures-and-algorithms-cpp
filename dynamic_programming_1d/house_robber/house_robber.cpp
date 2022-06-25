/*
You are a professional robber planning to rob houses along a street. 
Each house has a certain amount of money stashed, 
the only constraint stopping you from robbing each of them is that 
adjacent houses have security systems connected and it will automatically 
contact the police if two adjacent houses were broken into on the same night.

Given an integer array nums representing the amount of money of each house, 
return the maximum amount of money you can rob tonight without alerting the police.

 
Example 1:
Input: nums = [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
Total amount you can rob = 1 + 3 = 4.

Example 2:
Input: nums = [2,7,9,3,1]
Output: 12
Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
Total amount you can rob = 2 + 9 + 1 = 12.
 
Constraints:
1 <= nums.length <= 100
0 <= nums[i] <= 400


Solution 1
Time Complexity: O(n), space complexity: O(1)
Strategy:
Iterate over the array and keep track of the previous two best robbing totals.
Starting from the third index in the array update the 
current indexes robbing amount to the maximimum robbing total up until that index.
The maximimum robbing total up until an index is the maximum of either the previous 
indexes robbing total or the total from two indexes back plus the current robbing amount.
At the end return the last indexs maximum robbing total.
Edge Case: If an array of size two then return the maximum of the two values.

Solution 2
Time Complexity: O(n), space complexity: O(1)
Strategy:
Iterate over the array and keep track of the previous two best robbing totals.
Initialise both robbing totals to 0.
Iterate over the amount array and assign the current robbing total to 
the maximum of the current robbing total or the previous robbing total plus the current amount.
Then shift over the previous robbing total to take the old current robbing total amount.
At the end return the current robbing total.



Video:
https://www.youtube.com/watch?v=73r3KWiEvyk&ab_channel=NeetCode
*/
#include "house_robber.h"
#include <vector>



int robSolution1(std::vector<int>& nums) {
    if (nums.size() == 2) {
        nums.at(1) = std::max(nums.at(0), nums.at(1));
    }
    for (std::size_t i = 2; i < nums.size(); i++) {
        nums.at(i) = std::max(nums.at(i - 1), nums.at(i - 2) + nums.at(i));
    }
    return nums.at(nums.size() - 1);
}



int robSolution2(std::vector<int>& nums) {
    int rob_total_prev = 0;
    int rob_total_current = 0;
    for (int rob_amount: nums) {
        int temp = std::max(rob_total_prev + rob_amount, rob_total_current);
        rob_total_prev = rob_total_current;
        rob_total_current = temp;
    }
    return rob_total_current;
}