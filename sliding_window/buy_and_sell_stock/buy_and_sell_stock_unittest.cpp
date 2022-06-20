#include "buy_and_sell_stock.h"
#include <vector>
#include "gtest/gtest.h"


// Solution 1 Tests
TEST(ValidBracketsTestSuite, GeneralCase) {
    std::vector<int> prices = {7, 1, 5, 3, 6, 4};
    EXPECT_EQ(maxProfit(prices), 5);
    std::vector<int> prices1 = {7, 6, 4, 3, 1};
    EXPECT_EQ(maxProfit(prices1), 0);
}