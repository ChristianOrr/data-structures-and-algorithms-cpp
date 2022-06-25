#include "house_robber.h"
#include <vector>
#include "gtest/gtest.h"


// Solution 1 Tests
TEST(HouseRobberSolution1TestSuite, GeneralCase) {
    std::vector<int> input = {1,2,3,1};
    EXPECT_EQ(robSolution1(input), 4);

    std::vector<int> input1 = {2,7,9,3,1};
    EXPECT_EQ(robSolution1(input1), 12);

    std::vector<int> input2 = {2};
    EXPECT_EQ(robSolution1(input2), 2);

    std::vector<int> input3 = {2,5};
    EXPECT_EQ(robSolution1(input3), 5);

    std::vector<int> input4 = {2,5,2};
    EXPECT_EQ(robSolution1(input4), 5);
}


// Solution 2 Tests
TEST(HouseRobberSolution2TestSuite, GeneralCase) {
    std::vector<int> input = {1,2,3,1};
    EXPECT_EQ(robSolution2(input), 4);

    std::vector<int> input1 = {2,7,9,3,1};
    EXPECT_EQ(robSolution2(input1), 12);

    std::vector<int> input2 = {2};
    EXPECT_EQ(robSolution2(input2), 2);

    std::vector<int> input3 = {2,5};
    EXPECT_EQ(robSolution2(input3), 5);

    std::vector<int> input4 = {2,5,2};
    EXPECT_EQ(robSolution2(input4), 5);
}
