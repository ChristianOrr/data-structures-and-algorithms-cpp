cmake_minimum_required(VERSION 3.16.3)

project(ValidPalindrome 
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(valid_palindrome STATIC valid_palindrome.cpp)

add_executable(valid_palindrome_test valid_palindrome_unittest.cpp)

target_link_libraries(
    valid_palindrome_test 
    PRIVATE gtest_main
    PRIVATE valid_palindrome
)

gtest_discover_tests(valid_palindrome_test)

