cmake_minimum_required(VERSION 3.16.3)

project(InvertBinaryTree 
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(invert_binary_tree STATIC invert_binary_tree.cpp)

add_executable(invert_binary_tree_test invert_binary_tree_unittest.cpp)

target_link_libraries(
    invert_binary_tree_test 
    PRIVATE gtest_main
    PRIVATE invert_binary_tree
)

gtest_discover_tests(invert_binary_tree_test)