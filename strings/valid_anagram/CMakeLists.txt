cmake_minimum_required(VERSION 3.16.3)

project(ValidAnagram 
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(valid_anagram STATIC valid_anagram.cpp)

add_executable(valid_anagram_test valid_anagram_unittest.cpp)

target_link_libraries(
    valid_anagram_test 
    PRIVATE gtest_main
    PRIVATE valid_anagram
)

gtest_discover_tests(valid_anagram_test)

