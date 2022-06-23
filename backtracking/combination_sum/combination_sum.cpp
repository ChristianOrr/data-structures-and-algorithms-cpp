/*
Given an array of distinct integers candidates and a target integer target, 
return a list of all unique combinations of candidates where the chosen numbers sum to target. 
You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. 
Two combinations are unique if the frequency of at least one of the chosen numbers is different.

It is guaranteed that the number of unique combinations that sum up to 
target is less than 150 combinations for the given input.


Example 1:
Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
Explanation:
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.

Example 2:
Input: candidates = [2,3,5], target = 8
Output: [[2,2,2,2],[2,3,3],[3,5]]

Example 3:
Input: candidates = [2], target = 1
Output: []
 
Constraints:
1 <= candidates.length <= 30
1 <= candidates[i] <= 200
All elements of candidates are distinct.
1 <= target <= 500


Solution 1
Time Complexity: O(2^t), space complexity: O(d) - 
t is the target, d is the depth
Strategy:
Use dfs to recursively try all the combinations of candidates.
Keep track of the list of combinations that add up to target, the current combination and the current total.
Base Case1: Current total equels the target, 
            then add the current combination to the list of combinations and return.
Base Case2: Candidates are empty or the total is greater than the target, then return.
Perform two recursive calls to dfs.
First call: add the first candidate to the current combination and increase the total.
Second call: remove the first candidate from the list of candidates.


Video:
https://www.youtube.com/watch?v=GBKI9VSKdGg&ab_channel=NeetCode
*/
#include "combination_sum.h"
#include <vector>
#include <deque>


void dfs(std::deque<int> candidates, int target, std::vector<std::vector<int>> &combinations, std::vector<int> current_comb, unsigned total) {
    if (total == target) {
        combinations.push_back(current_comb);
        return;
    } else if (total > target || candidates.empty()) {
        return;
    }

    int next = candidates.front();
    std::vector<int> comb1 = current_comb;
    comb1.push_back(next);
    dfs(candidates, target, combinations, comb1, total + next);

    candidates.pop_front();
    dfs(candidates, target, combinations, current_comb, total);
}



std::vector<std::vector<int>> combinationSum(std::vector<int> candidates, int target) {
    std::deque<int> cand(candidates.begin(), candidates.end());
    std::vector<std::vector<int>> combs;

    dfs(cand, target, combs, {}, 0);

    return combs;
}

