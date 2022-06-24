cmake_minimum_required(VERSION 3.16.3)

project(NumberOfIslands 
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(number_of_islands STATIC number_of_islands.cpp)

add_executable(number_of_islands_test number_of_islands_unittest.cpp)

target_link_libraries(
    number_of_islands_test 
    PRIVATE gtest_main
    PRIVATE number_of_islands
)

gtest_discover_tests(number_of_islands_test)