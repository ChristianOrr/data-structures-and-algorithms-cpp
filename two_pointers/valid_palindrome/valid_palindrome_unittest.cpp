#include "valid_palindrome.h"
#include <string>
#include "gtest/gtest.h"


// Solution 1 Tests
TEST(ValidPalindromeSolution1TestSuite, GeneralCase) {
    EXPECT_TRUE(isPalindromeSolution1("abcdcba"));
    EXPECT_TRUE(isPalindromeSolution1("m"));
    EXPECT_FALSE(isPalindromeSolution1("bd"));
}


// Solution 2 Tests
TEST(ValidPalindromeSolution2TestSuite, GeneralCase) {
    EXPECT_TRUE(isPalindromeSolution2("abcdcba"));
    EXPECT_TRUE(isPalindromeSolution2("m"));
    EXPECT_FALSE(isPalindromeSolution2("bd"));
}