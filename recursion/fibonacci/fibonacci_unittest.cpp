#include "fibonacci.h"
#include "gtest/gtest.h"


// Solution 1 Tests
TEST(DFSSolution1TestSuite, GeneralCase) {
    EXPECT_EQ(getNthFibSolution1(6), 5);
    EXPECT_EQ(getNthFibSolution1(1), 0);
    EXPECT_EQ(getNthFibSolution1(11), 55);
    EXPECT_EQ(getNthFibSolution1(2), 1);
}

// Solution 2 Tests
TEST(DFSSolution2TestSuite, GeneralCase) {
    EXPECT_EQ(getNthFibSolution2(6), 5);
    EXPECT_EQ(getNthFibSolution2(1), 0);
    EXPECT_EQ(getNthFibSolution2(11), 55);
    EXPECT_EQ(getNthFibSolution2(2), 1);
}

// Solution 3 Tests
TEST(DFSSolution3TestSuite, GeneralCase) {
    EXPECT_EQ(getNthFibSolution3(6), 5);
    EXPECT_EQ(getNthFibSolution3(1), 0);
    EXPECT_EQ(getNthFibSolution3(11), 55);
    EXPECT_EQ(getNthFibSolution3(2), 1);
}
