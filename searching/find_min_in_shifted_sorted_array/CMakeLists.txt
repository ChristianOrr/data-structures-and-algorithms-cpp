cmake_minimum_required(VERSION 3.16.3)

project(FindMinInShiftedSortedArray
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(find_min_in_shifted_sorted_array STATIC find_min_in_shifted_sorted_array.cpp)

add_executable(find_min_in_shifted_sorted_array_test find_min_in_shifted_sorted_array_unittest.cpp)

target_link_libraries(
    find_min_in_shifted_sorted_array_test 
    PRIVATE gtest_main
    PRIVATE find_min_in_shifted_sorted_array
)

gtest_discover_tests(find_min_in_shifted_sorted_array_test)