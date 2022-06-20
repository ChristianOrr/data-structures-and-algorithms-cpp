/*
easy

Write a function that takes in a non-empty string and
that returns a boolean representing whether the string is a palindrome.

A palindrome is defined as a string that's written the same forward and backward.
Note that single-character strings are palindromes.

Sample Input
string = "abcdcba"
Sample Output
true // it's written the same forward and backward

Solution 1
Time complexity: O(n), Space complexity: O(n)
Strategy:
Reverse the string. Return true if the string is equal to its reverse.

Solution 2
Time complexity: O(n), Space complexity: O(1)
Strategy:
Two pointers. Use while loop with pointers on left and right ends.
If left and right values are not equal return False else
increment left index and decrement right index and continue.
Return True if the loop completes without finding a miss-match.

Video:
https://www.youtube.com/watch?v=jJXJ16kPFWg&ab_channel=NeetCode
*/
#include "valid_palindrome.h"
#include <string>
#include <algorithm>



bool isPalindromeSolution1(std::string str) {
    std::string reversed_str(str.rbegin(), str.rend());
    return str == reversed_str;
}


bool isPalindromeSolution2(std::string str) {
    int left = 0;
    int right = str.size() - 1;

    while (left <= right) {
        char left_value = str.at(left);
        char right_value = str.at(right);

        if (left_value != right_value) {
            return false;
        }
        left += 1;
        right -= 1;
    }
    return true; 
}