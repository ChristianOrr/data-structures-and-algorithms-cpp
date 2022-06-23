cmake_minimum_required(VERSION 3.16.3)

project(ValidateBST
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(validate_bst STATIC validate_bst.cpp)

add_executable(validate_bst_test validate_bst_unittest.cpp)

target_link_libraries(
    validate_bst_test 
    PRIVATE gtest_main
    PRIVATE validate_bst
)

gtest_discover_tests(validate_bst_test)