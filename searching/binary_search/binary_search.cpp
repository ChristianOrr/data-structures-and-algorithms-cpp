/*
easy

Write a function that takes in a sorted array of integers as well as a target integer.
The function should use the Binary Search algorithm to determine if the target integer is contained in the array and
should return its index if it is, otherwise -1.

Sample Input
array = [0, 1, 21, 33, 45, 45, 61, 71, 72, 73]
target = 33
Sample Output
3

Solution 1
Time Complexity: O(log(n)), space complexity: O(log(n))
Strategy:
Recursion, use three pointers for left, right and middle of the array.
Base case: Return -1 if left index is greater than right index.
If middle_number is equal target return middle, elif target less than middle_number set right = middle - 1.
Else set left = middle + 1.



Solution 2
Time Complexity: O(log(n)), space complexity: O(1)
Strategy:
Iteration, use three pointers for left, right and middle of the array.
Loop while left <= right.
If middle_number == target return middle, elif target < middle_number set right = middle - 1.
Else set left = middle + 1.
If loop finishes return -1.

Video:
https://www.youtube.com/watch?v=s4DPM8ct1pI&ab_channel=NeetCode
*/
#include "binary_search.h"
#include <vector>


int binary_search_helper(std::vector<int> array, int target, int left, int right) {
    if (left > right) 
        return -1;
    int middle = (right + left) / 2;

    if (array.at(middle) == target) {
        return middle;
    } else if (target > array.at(middle)) {
        left = middle + 1;
        return binary_search_helper(array, target, left, right);
    } else {
        right = middle - 1;
        return binary_search_helper(array, target, left, right);
    }
}

int binarySearchSolution1(std::vector<int> array, int target) {
    int left = 0;
    int right = array.size() - 1;
    return binary_search_helper(array, target, left, right);
}


int binarySearchSolution2(std::vector<int> array, int target) {
    int left = 0;
    int right = array.size() - 1;

    while (left <= right) {
        int middle = (left + right) / 2;
        if (array.at(middle) == target) {
            return middle;
        } else if (target > array.at(middle)) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return -1;
}

