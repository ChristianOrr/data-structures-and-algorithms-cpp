#include "number_of_islands.h"
#include <vector>
#include "gtest/gtest.h"


// Solution 1 Tests
TEST(NumberOfIslandsTestSuite, GeneralCase) {
    std::vector<std::vector<char>> grid_input = {
        {'1','1','1','1','0'},
        {'1','1','0','1','0'},
        {'1','1','0','0','0'},
        {'0','0','0','0','0'}
    };
    EXPECT_EQ(numIslands(grid_input), 1);


    std::vector<std::vector<char>> grid_input1 = {
        {'1','1','0','0','0'},
        {'1','1','0','0','0'},
        {'0','0','1','0','0'},
        {'0','0','0','1','1'}
    };
    EXPECT_EQ(numIslands(grid_input1), 3);
}