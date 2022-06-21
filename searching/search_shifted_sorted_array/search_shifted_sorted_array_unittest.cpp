#include "search_shifted_sorted_array.h"
#include <vector>
#include "gtest/gtest.h"


// Solution 1 Tests
TEST(BinarySearchSolution1TestSuite, GeneralCase) {
    EXPECT_EQ(searchArraySolution1({45, 61, 71, 72, 73, 0, 1, 21, 33, 37}, 33), 8);
    EXPECT_EQ(searchArraySolution1({33, 37, 45}, 38), -1);
    EXPECT_EQ(searchArraySolution1({3, 1}, 1), 1);
}
