cmake_minimum_required(VERSION 3.16.3)

project(CombinationSum
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(combination_sum STATIC combination_sum.cpp)

add_executable(combination_sum_test combination_sum_unittest.cpp)

target_link_libraries(
    combination_sum_test 
    PRIVATE gtest_main
    PRIVATE combination_sum
)

gtest_discover_tests(combination_sum_test)