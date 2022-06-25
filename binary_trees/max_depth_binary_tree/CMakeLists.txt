cmake_minimum_required(VERSION 3.16.3)

project(MaxDepthBinaryTree 
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(max_depth_binary_tree STATIC max_depth_binary_tree.cpp)

add_executable(max_depth_binary_tree_test max_depth_binary_tree_unittest.cpp)

target_link_libraries(
    max_depth_binary_tree_test 
    PRIVATE gtest_main
    PRIVATE max_depth_binary_tree
)

gtest_discover_tests(max_depth_binary_tree_test)