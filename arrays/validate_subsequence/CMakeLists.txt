cmake_minimum_required(VERSION 3.16.3)

project(ValidateSubsequence 
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(validate_subsequence STATIC validate_subsequence.cpp)

add_executable(validate_subsequence_test validate_subsequence_unittest.cpp)

target_link_libraries(
  validate_subsequence_test 
    PRIVATE gtest_main
    PRIVATE validate_subsequence
)

gtest_discover_tests(validate_subsequence_test)

