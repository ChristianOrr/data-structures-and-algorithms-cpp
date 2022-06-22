cmake_minimum_required(VERSION 3.16.3)

project(ThreeSum 
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(three_sum STATIC three_sum.cpp)

add_executable(three_sum_test three_sum_unittest.cpp)

target_link_libraries(
    three_sum_test 
    PRIVATE gtest_main
    PRIVATE three_sum
)

gtest_discover_tests(three_sum_test)

