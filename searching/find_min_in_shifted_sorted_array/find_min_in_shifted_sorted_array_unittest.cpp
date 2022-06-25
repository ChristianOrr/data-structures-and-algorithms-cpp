#include "find_min_in_shifted_sorted_array.h"
#include <vector>
#include "gtest/gtest.h"



// Solution 1 Tests
TEST(FindMinInShiftedSortedArrayTestSuite, GeneralCase) {
    EXPECT_EQ(findMin({3,4,5,1,2}), 1);
    EXPECT_EQ(findMin({4,5,6,7,0,1,2}), 0);
    EXPECT_EQ(findMin({11,13,15,17}), 11);
}