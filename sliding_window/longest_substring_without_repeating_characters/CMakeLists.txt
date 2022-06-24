cmake_minimum_required(VERSION 3.16.3)

project(LongestSubstringWithoutRepeatingCharacters 
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(longest_substring_without_repeating_characters STATIC longest_substring_without_repeating_characters.cpp)

add_executable(longest_substring_without_repeating_characters_test longest_substring_without_repeating_characters_unittest.cpp)

target_link_libraries(
    longest_substring_without_repeating_characters_test 
    PRIVATE gtest_main
    PRIVATE longest_substring_without_repeating_characters
)

gtest_discover_tests(longest_substring_without_repeating_characters_test)