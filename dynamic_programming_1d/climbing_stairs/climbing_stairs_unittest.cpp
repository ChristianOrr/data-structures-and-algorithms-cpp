#include "climbing_stairs.h"
#include "gtest/gtest.h"


// Solution 1 Tests
TEST(CombinationSumTestSuite, GeneralCase) {
    EXPECT_EQ(climbStairs(2), 2);
    EXPECT_EQ(climbStairs(3), 3);
    EXPECT_EQ(climbStairs(1), 1);
    EXPECT_EQ(climbStairs(4), 5);
    EXPECT_EQ(climbStairs(5), 8);
    EXPECT_EQ(climbStairs(6), 13);
}