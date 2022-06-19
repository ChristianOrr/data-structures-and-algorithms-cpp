cmake_minimum_required(VERSION 3.16.3)

project(BinarySearch 
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(binary_search STATIC binary_search.cpp)

add_executable(binary_search_test binary_search_unittest.cpp)

target_link_libraries(
    binary_search_test 
    PRIVATE gtest_main
    PRIVATE binary_search
)

gtest_discover_tests(binary_search_test)