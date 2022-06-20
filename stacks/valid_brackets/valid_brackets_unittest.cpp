#include "valid_brackets.h"
#include <string>
#include "gtest/gtest.h"

// Solution 1 Tests
TEST(ValidBracketsTestSuite, GeneralCase) {
    EXPECT_TRUE(isValid("([])(){}(())()()"));
    EXPECT_FALSE(isValid(")[]}"));
    EXPECT_FALSE(isValid("()[]{}{"));
    EXPECT_FALSE(isValid("[((([])([]){}){}){}([])[]((())"));
    EXPECT_TRUE(isValid("(z)"));
}