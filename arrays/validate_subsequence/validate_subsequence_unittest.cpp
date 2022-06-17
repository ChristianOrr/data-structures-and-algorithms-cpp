#include "validate_subsequence.h"
#include <vector>
#include "gtest/gtest.h"


// Solution 1 Tests
TEST(ValidateSubSolution1TestSuite, GeneralCase) {
    bool output = isValidSubsequenceSolution1({5, 1, 22, 25, 6, -1, 8, 10}, {1, 6, -1, 10});
    EXPECT_TRUE(output);
}

TEST(ValidateSubSolution1TestSuite, SameSequenceCase) {
    bool output = isValidSubsequenceSolution1({5}, {5});
    EXPECT_TRUE(output);
}

TEST(ValidateSubSolution1TestSuite, FalseCase) {
    bool output = isValidSubsequenceSolution1({5}, {3});
    EXPECT_FALSE(output);
}

// Solution 2 Tests
TEST(ValidateSubSolution2TestSuite, GeneralCase) {
    bool output = isValidSubsequenceSolution2({5, 1, 22, 25, 6, -1, 8, 10}, {1, 6, -1, 10});
    EXPECT_TRUE(output);
}

TEST(ValidateSubSolution2TestSuite, SameSequenceCase) {
    bool output = isValidSubsequenceSolution2({5}, {5});
    EXPECT_TRUE(output);
}

TEST(ValidateSubSolution2TestSuite, FalseCase) {
    bool output = isValidSubsequenceSolution2({5}, {3});
    EXPECT_FALSE(output);
}

