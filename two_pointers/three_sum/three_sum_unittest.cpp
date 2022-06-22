#include "three_sum.h"
#include <vector>
#include "gtest/gtest.h"


// Solution 2 Tests
TEST(ThreePointerSolution2Solution1TestSuite, GeneralCase) {
    std::vector<std::vector<int>> expected{{-8, 2, 6}, {-8, 3, 5}, {-6, 1, 5}};
    EXPECT_EQ(threeSumSolution2({12, 3, 1, 2, -6, 5, -8, 6}, 0), expected);

    std::vector<std::vector<int>> expected1;
    EXPECT_EQ(threeSumSolution2({3, 2, 2}, 8), expected1);
}