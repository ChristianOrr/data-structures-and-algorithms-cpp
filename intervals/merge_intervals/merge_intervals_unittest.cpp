#include "merge_intervals.h"
#include <vector>
#include "gtest/gtest.h"


// Solution 1 Tests
TEST(MergeIntervalsTestSuite, GeneralCase) {
    std::vector<std::vector<int>> input{{1,3},{2,6},{8,10},{15,18}};
    std::vector<std::vector<int>> expected{{1,6},{8,10},{15,18}};
    EXPECT_EQ(merge(input), expected);

    std::vector<std::vector<int>> input1{{1,4},{4,5}};
    std::vector<std::vector<int>> expected1{{1,5}};
    EXPECT_EQ(merge(input1), expected1);

    std::vector<std::vector<int>> input2{{1,3},{8,10},{15,18},{2,6}};
    std::vector<std::vector<int>> expected2{{1,6},{8,10},{15,18}};
    EXPECT_EQ(merge(input2), expected2);
}


