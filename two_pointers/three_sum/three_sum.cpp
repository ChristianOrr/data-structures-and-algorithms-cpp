/*
Write a function that takes in a non-empty array of distinct integers and 
an integer representing a target sum. 
The function should find all triplets in the array that sum up to the target sum and 
return a two-dimensional array of all these triplets. 
The numbers in each triplet should be ordered in ascending order, and 
the triplets themselves should be ordered in ascending order with respect to the numbers they hold.

If no three numbers sum up to the target sum, the function should return an empty array.

Sample Input:
array = [12, 3, 1, 2, -6, 5, -8, 6]
targetSum = 0

Sample Output:
[[-8, 2, 6], [-8, 3, 5], [-6, 1, 5]]


Solution 1
Time complexity: O(n^3), Space complexity: O(n)
Strategy:
Use tripple for loop to iterate through each combination of three elements in the array
to find the combinations that add up to the target. 

Solution 2
Time complexity: O(n^2), Space complexity: O(n)
Strategy:
Sort the array.
Use single for loop to get the main pointer,
with an inner while loop with pointers on the left and right.
Start with the left pointer one position to the right of the main pointer.
Iterate through the rest of the array 
while the left pointers index is less than the rights index.
Keep track of the three pointers values and add them to the 
output if they equal the target.
If they do equal the target, then increment the left and decrement the right.
If the sum is less than the target then increment the left pointer.
If the sum is greater than the target then decrement the right pointer.


Video:
https://www.youtube.com/watch?v=jzZsG8n2R9A&ab_channel=NeetCode
*/
#include "three_sum.h"
#include <vector>
#include <algorithm>

std::vector<std::vector<int>> threeSumSolution2(std::vector<int> array, int targetSum) {
    std::sort(array.begin(), array.end());
    std::vector<std::vector<int>> output;

    for (unsigned i = 0; i < array.size() - 2; i++) {
        unsigned left = i + 1;
        unsigned right = array.size() - 1;
        int main_value = array.at(i); 
        while (left < right) {
            int left_value = array.at(left);
            int right_value = array.at(right);
            int sum = main_value + left_value + right_value;
            if (sum == targetSum) {
                output.push_back({main_value, left_value, right_value});
                left += 1;
                right -= 1;
            } else if (sum < targetSum) {
                left += 1;
            } else {
                right -= 1;
            }
        }
    }
    return output;
}


