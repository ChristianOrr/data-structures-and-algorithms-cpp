cmake_minimum_required(VERSION 3.16.3)

project(RemoveNthNodeFromEndOfList 
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(remove_nth_node_from_end_of_list STATIC remove_nth_node_from_end_of_list.cpp)

add_executable(remove_nth_node_from_end_of_list_test remove_nth_node_from_end_of_list_unittest.cpp)

target_link_libraries(
    remove_nth_node_from_end_of_list_test 
    PRIVATE gtest_main
    PRIVATE remove_nth_node_from_end_of_list
)

gtest_discover_tests(remove_nth_node_from_end_of_list_test)