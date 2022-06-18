cmake_minimum_required(VERSION 3.16.3)

project(ReverseLinkedList 
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(reverse_linked_list STATIC reverse_linked_list.cpp)

add_executable(reverse_linked_list_test reverse_linked_list_unittest.cpp)

target_link_libraries(
    reverse_linked_list_test 
    PRIVATE gtest_main
    PRIVATE reverse_linked_list
)

gtest_discover_tests(reverse_linked_list_test)