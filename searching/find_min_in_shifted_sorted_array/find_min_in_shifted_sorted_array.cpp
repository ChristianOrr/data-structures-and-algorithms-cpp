/*
medium

Suppose an array of length n sorted in ascending order is rotated between 1 and n times. 
For example, the array nums = [0,1,2,4,5,6,7] might become:
 - [4,5,6,7,0,1,2] if it was rotated 4 times.
 - [0,1,2,4,5,6,7] if it was rotated 7 times.
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

Given the sorted rotated array nums of unique elements, return the minimum element of this array.

You must write an algorithm that runs in O(log n) time.


Example 1:
Input: nums = [3,4,5,1,2]
Output: 1
Explanation: The original array was [1,2,3,4,5] rotated 3 times.

Example 2:
Input: nums = [4,5,6,7,0,1,2]
Output: 0
Explanation: The original array was [0,1,2,4,5,6,7] and it was rotated 4 times.

Example 3:
Input: nums = [11,13,15,17]
Output: 11
Explanation: The original array was [11,13,15,17] and it was rotated 4 times. 
 

Constraints:
n == nums.length
1 <= n <= 5000
-5000 <= nums[i] <= 5000
All the integers of nums are unique.
nums is sorted and rotated between 1 and n times.


Solution 1
Time Complexity: O(log(n)), space complexity: O(log(n))
Strategy:
Use binary search.
Keep track of the min value while performing binary search.
Set left pointer to 0 and right to the last index, 
then iterate while left index is less than or equal right.
If the array is already sorted, 
then return the minimum of the left value and current min value.
Get the middle index and update the min to be min of middle and min values.
If the left side is already sorted, then explore the right.
If the right side is sorted, then explore the left.
Return the min after the loop completes.


Video:
https://www.youtube.com/watch?v=nIVW4P8b1VA&ab_channel=NeetCode
*/
#include <vector>


int findMin(std::vector<int> nums) {
    int min = nums.at(0);
    std::size_t left = 0;
    std::size_t right = nums.size() - 1;

    while (left <= right) {
        int left_value = nums.at(left);
        int right_value = nums.at(right);
        if (left_value < right_value) {
            min = std::min(min, left_value);
            return min;
        }
        std::size_t middle = (left + right) / 2;
        int middle_value = nums.at(middle);
        min = std::min(min, middle_value);
        if (left_value < middle_value) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return min;
}
