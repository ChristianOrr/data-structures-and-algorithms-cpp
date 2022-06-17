#include "sorted_squared_array.h"
#include <vector>
#include "gtest/gtest.h"


// Solution 1 Tests
TEST(SortedSquaredArraySolution1TestSuite, GeneralCase) {
    std::vector<int> output = sortedSquaredArraySolution1({-3, 1, 2, 3, 5});
    std::vector<int> answer{1, 4, 9, 9, 25};
    EXPECT_EQ(output, answer);
}

TEST(SortedSquaredArraySolution1TestSuite, EmptyCase) {
    std::vector<int> output = sortedSquaredArraySolution1({});
    std::vector<int> answer{};
    EXPECT_EQ(output, answer);
}


// Solution 2 Tests
TEST(SortedSquaredArraySolution2TestSuite, GeneralCase) {
    std::vector<int> output = sortedSquaredArraySolution2({-3, 1, 2, 3, 5});
    std::vector<int> answer{1, 4, 9, 9, 25};
    EXPECT_EQ(output, answer);
}

TEST(SortedSquaredArraySolution2TestSuite, EmptyCase) {
    std::vector<int> output = sortedSquaredArraySolution2({});
    std::vector<int> answer{};
    EXPECT_EQ(output, answer);
}