cmake_minimum_required(VERSION 3.16.3)

project(TwoSum 
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(two_sum STATIC two_sum.cpp)

add_executable(two_sum_test two_sum_unittest.cpp)

target_link_libraries(
    two_sum_test 
    PRIVATE gtest_main
    PRIVATE two_sum
)

gtest_discover_tests(two_sum_test)

