#include "two_sum.h"
// #include <limits.h>
#include <vector>
#include "gtest/gtest.h"


// Solution 1 Tests
TEST(TwoSumSolution1TestSuite, GeneralCase) {
    std::vector<int> output = twoNumberSumSolution1({3, 5, -4, 8, 11, 1, -1, 6}, 10);
    EXPECT_EQ(output.size(), 2);
    EXPECT_EQ(std::count(output.begin(), output.end(), -1), 1);
    EXPECT_EQ(std::count(output.begin(), output.end(), 11), 1);
}

TEST(TwoSumSolution1TestSuite, SingleNumberCase) {
    std::vector<int> output = twoNumberSumSolution1({4}, 4);
    EXPECT_EQ(output.size(), 0);
}

TEST(TwoSumSolution1TestSuite, NoMatchCase) {
    std::vector<int> output = twoNumberSumSolution1({4, 6, 1}, 8);
    EXPECT_EQ(output.size(), 0);
}

// Solution 2 Tests
TEST(TwoSumSolution2TestSuite, GeneralCase) {
    std::vector<int> output = twoNumberSumSolution2({3, 5, -4, 8, 11, 1, -1, 6}, 10);
    EXPECT_EQ(output.size(), 2);
    EXPECT_EQ(std::count(output.begin(), output.end(), -1), 1);
    EXPECT_EQ(std::count(output.begin(), output.end(), 11), 1);
}

TEST(TwoSumSolution2TestSuite, SingleNumberCase) {
    std::vector<int> output = twoNumberSumSolution2({4}, 4);
    EXPECT_EQ(output.size(), 0);
}

TEST(TwoSumSolution2TestSuite, NoMatchCase) {
    std::vector<int> output = twoNumberSumSolution2({4, 6, 1}, 8);
    EXPECT_EQ(output.size(), 0);
}

// Solution 3 Tests
TEST(TwoSumSolution3TestSuite, GeneralCase) {
    std::vector<int> output = twoNumberSumSolution3({3, 5, -4, 8, 11, 1, -1, 6}, 10);
    EXPECT_EQ(output.size(), 2);
    EXPECT_EQ(std::count(output.begin(), output.end(), -1), 1);
    EXPECT_EQ(std::count(output.begin(), output.end(), 11), 1);
}

TEST(TwoSumSolution3TestSuite, SingleNumberCase) {
    std::vector<int> output = twoNumberSumSolution3({4}, 4);
    EXPECT_EQ(output.size(), 0);
}

TEST(TwoSumSolution3TestSuite, NoMatchCase) {
    std::vector<int> output = twoNumberSumSolution3({4, 6, 1}, 8);
    EXPECT_EQ(output.size(), 0);
}