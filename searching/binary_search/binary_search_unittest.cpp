#include "binary_search.h"
#include <vector>
#include "gtest/gtest.h"


// Solution 1 Tests
TEST(BinarySearchSolution1TestSuite, GeneralCase) {
    EXPECT_EQ(binarySearchSolution1({0, 1, 21, 33, 45, 45, 61, 71, 72, 73}, 33), 3);
    EXPECT_EQ(binarySearchSolution1({1, 5, 23, 245}, 245), 3);
    EXPECT_EQ(binarySearchSolution1({0, 1, 21, 33, 71}, 0), 0);
    EXPECT_EQ(binarySearchSolution1({0, 21, 33, 61, 72, 355}, 354), -1);
}

// Solution 2 Tests
TEST(BinarySearchSolution2TestSuite, GeneralCase) {
    EXPECT_EQ(binarySearchSolution2({0, 1, 21, 33, 45, 45, 61, 71, 72, 73}, 33), 3);
    EXPECT_EQ(binarySearchSolution2({1, 5, 23, 245}, 245), 3);
    EXPECT_EQ(binarySearchSolution2({0, 1, 21, 33, 71}, 0), 0);
    EXPECT_EQ(binarySearchSolution2({0, 21, 33, 61, 72, 355}, 354), -1);
}
