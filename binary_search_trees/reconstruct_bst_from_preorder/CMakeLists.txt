cmake_minimum_required(VERSION 3.16.3)

project(ReconstructBSTFromPreorder
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(reconstruct_bst_from_preorder STATIC reconstruct_bst_from_preorder.cpp)

add_executable(reconstruct_bst_from_preorder_test reconstruct_bst_from_preorder_unittest.cpp)

target_link_libraries(
    reconstruct_bst_from_preorder_test 
    PRIVATE gtest_main
    PRIVATE reconstruct_bst_from_preorder
)

gtest_discover_tests(reconstruct_bst_from_preorder_test)