#include "combination_sum.h"
#include <vector>
#include <algorithm>
#include "gtest/gtest.h"


bool sumsIsEqual(std::vector<std::vector<int>> sums1, std::vector<std::vector<int>> sums2) {
    if (sums1.size() != sums2.size()) {
        return false;
    }

    for (unsigned i = 0; i < sums1.size(); i++) {
        std::sort(sums1.at(i).begin(), sums1.at(i).end());
        std::sort(sums2.at(i).begin(), sums2.at(i).end());        
    }

    std::sort(sums1.begin(), sums1.end());
    std::sort(sums2.begin(), sums2.end());

    for (unsigned i = 0; i < sums1.size(); i++) {
        if (sums1.at(i) != sums2.at(i)) {
            return false;
        }
    }
    return true;
}

// Solution 1 Tests
TEST(CombinationSumTestSuite, GeneralCase) {
    std::vector<std::vector<int>> expected{{2,2,3}, {7}};
    EXPECT_TRUE(sumsIsEqual(combinationSum({2,3,6,7}, 7), expected));

    std::vector<std::vector<int>> expected1{{2,2,2,2}, {2,3,3}, {3,5}};
    EXPECT_TRUE(sumsIsEqual(combinationSum({2,3,5}, 8), expected1));

    std::vector<std::vector<int>> expected2;
    EXPECT_TRUE(sumsIsEqual(combinationSum({2}, 1), expected2));
}

