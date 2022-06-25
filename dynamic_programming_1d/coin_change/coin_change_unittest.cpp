#include "coin_change.h"
#include <vector>
#include "gtest/gtest.h"


// Solution 1 Tests
TEST(CoinChangeTestSuite, GeneralCase) {
    std::vector<int> input = {1,2,5};
    EXPECT_EQ(coinChange(input, 11), 3);

    std::vector<int> input1 = {2};
    EXPECT_EQ(coinChange(input1, 3), -1);

    std::vector<int> input2 = {1};
    EXPECT_EQ(coinChange(input2, 0), 0);

    std::vector<int> input3 = {1,3,4,5};
    EXPECT_EQ(coinChange(input3, 7), 2);
}