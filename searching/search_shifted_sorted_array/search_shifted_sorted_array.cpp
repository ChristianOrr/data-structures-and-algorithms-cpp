/*
medium

Write a function that takes in a sorted array of distinct integers as well as a target integer.
The caveat is that the integers in the array have been shifted by some amount;
in other words, they've been moved to the left or to the right by one or more positions.
For example, [1, 2, 3, 4] might have turned into [3, 4, 1, 2].

The function should determine if the target integer is
contained in the array and should return its index if it is, otherwise -1.

Solution 1
Time Complexity: O(log(n)), space complexity: O(log(n))
Strategy:
Recursion. Use variation of Binary Search (three pointer strategy).
Base Case1: If left > right return -1. 
Base Case2: If middle == target return middle.
Check whether the left or right side is sorted.
Then check if the target is within the sorted side's interval.
If it is, then explore the sorted side, otherwise explore the other side.
Continue this method until the target is found or left index is greater than the right.

Solution 2
Time Complexity: O(log(n)), space complexity: O(1)
Strategy:
Iterative. Use variation of Binary Search (three pointer strategy).
While left <= right search for a match.
If middle == target return middle.
Otherwise check whether the left or right side is sorted.
Then check if the target is within the sorted side's interval.
If it is, then explore the sorted side, otherwise explore the other side.
If the while loop completes without finding a match return -1.

Video:
https://www.youtube.com/watch?v=U8XENwh8Oy8&ab_channel=NeetCode
*/
#include "search_shifted_sorted_array.h"
#include <vector>


int search_helper(std::vector<int> array, int target, int left, int right) {
    int middle = (left + right) / 2;
    if (left > right) {
        return -1;
    } else if (target == array.at(middle)) {
        return middle;        
    }

    if (array.at(left) < array.at(middle)) {
        if (target == array.at(left)) {
            return left;
        } else if (array.at(left) < target && target < array.at(middle)) {
            return search_helper(array, target, left, middle - 1);
        } else {
            return search_helper(array, target, middle + 1, right);
        }
    } else {
        if (target == array.at(right)) {
            return right;
        } else if (array.at(middle) < target && target < array.at(right)) {
            return search_helper(array, target, middle + 1, right);
        } else {
            return search_helper(array, target, left, middle - 1);
        }
    }
}


int searchArraySolution1(std::vector<int> array, int target) {
  return search_helper(array, target, 0, array.size() - 1);
}
