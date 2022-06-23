#include "insert_interval.h"

#include "gtest/gtest.h"


// Solution 1 Tests
TEST(InsertIntervalTestSuite, GeneralCase) {
    std::vector<std::vector<int>> expected{{1,5}, {6,9}};
    EXPECT_EQ(insert({{1,3}, {6,9}}, {2,5}), expected);

    std::vector<std::vector<int>> expected1{{1,2}, {3,10}, {12,16}};
    EXPECT_EQ(insert({{1,2}, {3,5}, {6,7}, {8,10}, {12,16}}, {4,8}), expected1);
}