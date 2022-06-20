cmake_minimum_required(VERSION 3.16.3)

project(FindClosestBSTValue
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(find_closest_bst_value STATIC find_closest_bst_value.cpp)

add_executable(find_closest_bst_value_test find_closest_bst_value_unittest.cpp)

target_link_libraries(
    find_closest_bst_value_test 
    PRIVATE gtest_main
    PRIVATE find_closest_bst_value
)

gtest_discover_tests(find_closest_bst_value_test)