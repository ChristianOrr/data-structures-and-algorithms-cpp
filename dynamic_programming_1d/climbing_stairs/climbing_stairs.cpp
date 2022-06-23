/*
easy 

You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?


Example 1:
Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps

Example 2:
Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
 
Constraints:
1 <= n <= 45

Solution 1
Time Complexity: O(log(n)), space complexity: O(n) - n is number of nodes
Strategy:
Same as fibonacci numbers.
Keep hash map with keys: containing n, and values: distinct ways to reach n.
Check if n is in the hash map. 
If it is then return the value.
If it is not then recursively call the function on n - 1 and n - 2, 
add the two values together and insert the answer into the hash map.
Then return the result.

Video:
https://www.youtube.com/watch?v=Y0lT9Fck7qI&ab_channel=NeetCode
*/
#include "climbing_stairs.h"
#include <unordered_map>


int climbStairs(int n, std::unordered_map<int, int> &hash) {
    if (hash.count(n) == 1) {
        return hash.at(n);
    } else {
        hash[n] = climbStairs(n - 1, hash) + climbStairs(n - 2, hash);
        return hash.at(n);
    }
}

