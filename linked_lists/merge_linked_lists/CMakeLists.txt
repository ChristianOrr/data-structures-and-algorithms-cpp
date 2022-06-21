cmake_minimum_required(VERSION 3.16.3)

project(MergeLinkedLists 
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(merge_linked_lists STATIC merge_linked_lists.cpp)

add_executable(merge_linked_lists_test merge_linked_lists_unittest.cpp)

target_link_libraries(
    merge_linked_lists_test 
    PRIVATE gtest_main
    PRIVATE merge_linked_lists
)

gtest_discover_tests(merge_linked_lists_test)