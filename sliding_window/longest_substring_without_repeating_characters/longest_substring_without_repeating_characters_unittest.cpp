#include "longest_substring_without_repeating_characters.h"
#include <string>
#include "gtest/gtest.h"


// Solution 1 Tests
TEST(LongestSubstringWithoutRepeatingCharactersTestSuite, GeneralCase) {
    EXPECT_EQ(lengthOfLongestSubstring("abcabcbb"), 3);
    EXPECT_EQ(lengthOfLongestSubstring("bbbbb"), 1);
    EXPECT_EQ(lengthOfLongestSubstring("pwwkew"), 3);
    EXPECT_EQ(lengthOfLongestSubstring(""), 0);
}
