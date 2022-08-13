cmake_minimum_required(VERSION 3.16.3)

project(MergeIntervals
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(merge_intervals STATIC merge_intervals.cpp)

add_executable(merge_intervals_test merge_intervals_unittest.cpp)

target_link_libraries(
    merge_intervals_test 
    PRIVATE gtest_main
    PRIVATE merge_intervals
)

gtest_discover_tests(merge_intervals_test)