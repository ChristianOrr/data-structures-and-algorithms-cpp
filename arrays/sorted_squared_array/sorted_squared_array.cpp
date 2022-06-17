/*
easy

Write a function that takes in a non-empty array of integers that are sorted in ascending order and
returns a new array of the same length with the squares of the original integers also sorted in ascending order.

Sample Input
array = [-3, 1, 2, 3, 5]
Sample Output
[1, 4, 9, 9, 25]

Solution 1
Time Complexity: O(nlog(n)), space complexity: O(1)
Strategy:
Square the elements in the array, sort the array and return it.

Solution 2
Time Complexity: O(n), space complexity: O(n)
Strategy:
Create left and right pointers.
Initialize the output square array with zero's, then iterate over it starting from the right.
At each position find the largest absolute value of left and right numbers,
then add its square to the output array, starting from the back.
Return the output array after the loop.
*/
#include <vector>
#include <algorithm>
#include "sorted_squared_array.h"


std::vector<int> sortedSquaredArraySolution1(std::vector<int> array) {
    std::transform(array.begin(), array.end(), array.begin(), [](int x) {return x*x; });
    std::sort(array.begin(), array.end());
    return array;
}


std::vector<int> sortedSquaredArraySolution2(std::vector<int> array) {
    unsigned left = 0;
    unsigned right = array.size() - 1;
    std::vector<int> output(array.size(), 0);

    for (int i = array.size() - 1; i >= 0; i--) {
        unsigned left_value = std::abs(array.at(left));
        unsigned right_value = std::abs(array.at(right));
        if (left_value > right_value) {
            output.at(i) = left_value * left_value;
            left += 1;
        } else {
            output.at(i) = right_value * right_value;
            right -= 1;
        }
    }
    return output;
}

