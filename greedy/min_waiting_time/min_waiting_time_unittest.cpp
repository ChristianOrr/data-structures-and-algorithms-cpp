#include "min_waiting_time.h"
#include <vector>
#include "gtest/gtest.h"


// Solution 1 Tests
TEST(MinWaitingTimeSolution1TestSuite, GeneralCase) {
    EXPECT_EQ(minimumWaitingTimeSolution1({3, 2, 1, 2, 6}), 17);
    EXPECT_EQ(minimumWaitingTimeSolution1({2, 1, 1, 1}), 6);
    EXPECT_EQ(minimumWaitingTimeSolution1({9}), 0);
}


// Solution 2 Tests
TEST(MinWaitingTimeSolution2TestSuite, GeneralCase) {
    EXPECT_EQ(minimumWaitingTimeSolution2({3, 2, 1, 2, 6}), 17);
    EXPECT_EQ(minimumWaitingTimeSolution2({2, 1, 1, 1}), 6);
    EXPECT_EQ(minimumWaitingTimeSolution2({9}), 0);
}
