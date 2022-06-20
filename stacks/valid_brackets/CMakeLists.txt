cmake_minimum_required(VERSION 3.16.3)

project(ValidBrackets 
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(valid_brackets STATIC valid_brackets.cpp)

add_executable(valid_brackets_test valid_brackets_unittest.cpp)

target_link_libraries(
    valid_brackets_test 
    PRIVATE gtest_main
    PRIVATE valid_brackets
)

gtest_discover_tests(valid_brackets_test)