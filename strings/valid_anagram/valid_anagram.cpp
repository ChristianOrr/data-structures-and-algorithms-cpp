/*
easy

Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase,
typically using all the original letters exactly once.


Example 1:
Input: s = "anagram", t = "nagaram"
Output: true

Example 2:
Input: s = "rat", t = "car"
Output: false


Solution 1
Time complexity: O(nlog(n)), Space complexity: O(1)
Strategy:
Sort both strings and return True if they are equal.

Solution 2
Time complexity: O(n), Space complexity: O(n)
Strategy:
Create hash map's to keep count of the number of times a character occurs.
If the hash maps are different, then return False, otherwise return True.
*/
#include <algorithm>
#include <string>
#include <unordered_map>
#include "valid_anagram.h"


bool isAnagramSolution1(std::string s, std::string t) {
    std::sort(s.begin(), s.end());
    std::sort(t.begin(), t.end());
    return s == t;
}


bool isAnagramSolution2(std::string s, std::string t) {
    std::unordered_map<char, unsigned> hash_s{};
    std::unordered_map<char, unsigned> hash_t{};

    if (s.size() != t.size()) {
        return false;
    } 
    for (unsigned i = 0; i < s.size(); i++) {
        hash_s[s.at(i)] += 1;
        hash_t[t.at(i)] += 1;
    }
    return hash_s == hash_t;
    
}