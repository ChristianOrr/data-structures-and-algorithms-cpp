cmake_minimum_required(VERSION 3.16.3)

project(SearchShiftedSortedArray
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(search_shifted_sorted_array STATIC search_shifted_sorted_array.cpp)

add_executable(search_shifted_sorted_array_test search_shifted_sorted_array_unittest.cpp)

target_link_libraries(
    search_shifted_sorted_array_test 
    PRIVATE gtest_main
    PRIVATE search_shifted_sorted_array
)

gtest_discover_tests(search_shifted_sorted_array_test)