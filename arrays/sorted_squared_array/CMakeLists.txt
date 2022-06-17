cmake_minimum_required(VERSION 3.16.3)

project(SortedSquaredArray 
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(sorted_squared_array STATIC sorted_squared_array.cpp)

add_executable(sorted_squared_array_test sorted_squared_array_unittest.cpp)

target_link_libraries(
    sorted_squared_array_test 
    PRIVATE gtest_main
    PRIVATE sorted_squared_array
)

gtest_discover_tests(sorted_squared_array_test)

