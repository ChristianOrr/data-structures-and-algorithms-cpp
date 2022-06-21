/*
medium

Write a function that takes in an array of strings and groups anagrams together.

Anagrams are strings made up of exactly the same letters, where order doesn't matter.
For example, "cinema" and "iceman" are anagrams; similarly, "foo" and "ofo" are anagrams.

Your function should return a list of anagram groups in no particular order.

Sample Input
words = ["yo", "act", "flop", "tac", "foo", "cat", "oy", "olfp"]
Sample Output
[["yo", "oy"], ["flop", "olfp"], ["act", "tac", "cat"], ["foo"]]

Solution 1
Time complexity: O(w * n * log(n) + n * w * log(w)), Space complexity: O(w * n) -
w: num words, n: length of the longest word.
Strategy:
Sort all the words and add them to a list in the same order as the unsorted list.
Create hash map with the keys as the sorted words and values are a list of all its unsorted anagrams.
Iterate over the words and add the anagrams to the hash map.
After the loop return all the hash map values, which will contain the lists of grouped anagrams.

Solution 2
Time complexity: O(w * n * log(n)), Space complexity: O(w * n) -
w: num words, n: length of the longest word.
Strategy:
Create hash map with the keys as the sorted words and values are a list of all its unsorted anagrams.
Iterate over the words and add the sorted word/anagrams to the hash map.
After the loop return all the hash map values, which will contain the lists of grouped anagrams.

Video:
https://www.youtube.com/watch?v=vzdNOK2oB2E&ab_channel=NeetCode
*/
#include "group_anagrams.h"
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>


std::vector<std::vector<std::string>> groupAnagramsSolution2(std::vector<std::string> words) {
    std::unordered_map<std::string, std::vector<std::string>> hash;

    for (std::string word: words) {
        std::string sorted_word = word;
        std::sort(sorted_word.begin(), sorted_word.end());
        if (hash.count(sorted_word) == 1) {
            hash[sorted_word].push_back(word);
        } else {
            hash[sorted_word] = std::vector<std::string>{word};
        }
        
    }

    std::vector<std::vector<std::string>> output;
    for (auto group: hash) {
        output.push_back(group.second);
    }
    return output;
}

