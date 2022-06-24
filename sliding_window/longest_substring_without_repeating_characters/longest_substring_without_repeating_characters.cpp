/*
medium

Given a string s, find the length of the longest substring without repeating characters.

Example 1:
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.

Example 2:
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

Example 3:
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 
Constraints:
0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.


Solution 1
Time complexity: O(n), Space complexity: O(n)
Strategy:
Use left and right pointers both starting at the first index.
Use two loops, the outer loop must increment the right pointer and
add the character to a set. 
The inner loop must increment the left pointer while the 
right character is in the set.
After the inner while loop the right character must be added to the set and
the max length must be updated if necessary.
Return the max length after both loops have completed.


Video:
https://www.youtube.com/watch?v=wiGpQwVHdE0&ab_channel=NeetCode
*/
#include "longest_substring_without_repeating_characters.h"
#include <string>
#include <unordered_set>
#include <algorithm>


int lengthOfLongestSubstring(std::string s) {
    std::size_t max_length = 0;
    std::size_t left = 0;
    std::unordered_set<char> characters;


    for (std::size_t right = 0; right < s.size(); right++) {
        char right_char = s.at(right);
        while (characters.count(right_char) == 1) {
            char left_char = s.at(left);
            characters.erase(left_char);
            left += 1;
        }
        characters.insert(right_char);
        max_length = std::max(characters.size(), max_length);

    }
    return max_length;
}

