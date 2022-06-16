/*
easy

Write a function that takes in a non-empty array of distinct integers and an integer representing a target sum.
If any two numbers in the input array sum up to the target sum,
the function should return them in an array, in any order.
If no two numbers sum up to the target sum, the function should return an empty array.

Note that the target sum has to be obtained by summing two different integers in the array;
you can't add a single integer to itself in order to obtain the target sum.
You can assume that there will be at most one pair of numbers summing up to the target sum.

Sample Input
array = [3, 5, -4, 8, 11, 1, -1, 6]
targetSum = 10
Sample Output
[-1, 11] // the numbers could be in reverse order

Solution 1
Time complexity: O(n^2), Space complexity: O(1)
Strategy:
Double for loop. Compare the number in the first loop to all the remaining numbers in the array.
If array[i] + array[j] == target, then return True.
Return False if it loops through all elements.

Solution 2
Time complexity: O(n), Space complexity: O(n)
Strategy:
Loop through the array a single time. Check if (target - current value) is in the hash map.
If it is then return the values, else add the current value to the hash map and continue.
Return False if it loops through all elements.

Solution 3
Time complexity: O(nlog(n)), Space complexity: O(1)
Strategy:
Sort the input array in-place. Create while loop and place left_pointer = 0 index and right_pointer = len(array) - 1,
last index. If left_pointer + right_pointer = target return the answer, else check if it's less or greater than target.
If less increment left_pointer, if greater decrement right_pointer and continue while loop.
Return False if it loops through all elements.
Video:
https://www.youtube.com/watch?v=KLlXCFG5TnA&ab_channel=NeetCode
*/
#include <vector>
#include <algorithm>
#include <unordered_set>
#include "two_sum.h"


std::vector<int> twoNumberSumSolution1(std::vector<int> array, int targetSum) {

    for (unsigned i = 0; i < array.size() - 1; i++) {
        for (unsigned j = i + 1; j < array.size(); j++) {
            int num1 = array.at(i);
            int num2 = array.at(j);
            if (targetSum == num1 + num2) {
                return std::vector<int>{num1, num2};
            }
        }
    }
    return std::vector<int>{};
}

std::vector<int> twoNumberSumSolution2(std::vector<int> array, int targetSum) {
    std::vector<int> output;
    std::unordered_set<int> visited;

    for (unsigned i = 0; i < array.size(); i++) {
        int current = array.at(i);
        int diff = targetSum - current;
        if (visited.find(diff) != visited.end()) {
            output.push_back(current);
            output.push_back(diff);
            return output;
        } else {
            visited.insert(current);
        }
    }
    return output;
}


std::vector<int> twoNumberSumSolution3(std::vector<int> array, int targetSum) {
    std::sort(array.begin(), array.end());

    unsigned left = 0;
    unsigned right = array.size() - 1;

    while (left < right) {
        int left_value = array.at(left);
        int right_value = array.at(right);
        int sum = left_value + right_value;
        if (targetSum == sum) {
            return std::vector<int>{left_value, right_value};
        } else if (targetSum > sum) {
            left += 1;
        } else {
            right -= 1;
        }
    }
    return std::vector<int>{};
}

