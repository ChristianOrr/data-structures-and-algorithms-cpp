#include "group_anagrams.h"
#include <vector>
#include <string>
#include "gtest/gtest.h"


bool compare(std::vector<std::vector<std::string>> expected, std::vector<std::vector<std::string>> output) {
    if (expected.size() != output.size()) {
        return false;
    }

    for (auto group : expected) {
        std::sort(group.begin(), group.end());
        if (std::find(output.begin(), output.end(), group) == output.end()) {
        return false;
        }
    }
    return true;
}


// Solution 2 Tests
TEST(GroupAnagramsSolution2TestSuite, GeneralCase) {
    std::vector<std::string> words = {"yo",  "act", "flop", "tac",
                                      "foo", "cat", "oy",   "olfp"};
    std::vector<std::vector<std::string>> expected = {
        {"yo", "oy"}, 
        {"flop", "olfp"}, 
        {"act", "tac", "cat"}, 
        {"foo"}
    };
    std::vector<std::vector<std::string>> output = groupAnagramsSolution2(words);
    for (auto &el : output) {
        std::sort(el.begin(), el.end());
    }
    EXPECT_TRUE(compare(expected, output));
}

