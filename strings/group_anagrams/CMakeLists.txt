cmake_minimum_required(VERSION 3.16.3)

project(GroupAnagrams 
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(group_anagrams STATIC group_anagrams.cpp)

add_executable(group_anagrams_test group_anagrams_unittest.cpp)

target_link_libraries(
    group_anagrams_test 
    PRIVATE gtest_main
    PRIVATE group_anagrams
)

gtest_discover_tests(group_anagrams_test)

