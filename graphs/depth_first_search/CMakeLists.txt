cmake_minimum_required(VERSION 3.16.3)

project(DepthFirstSearch 
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(depth_first_search STATIC depth_first_search.cpp)

add_executable(depth_first_search_test depth_first_search_unittest.cpp)

target_link_libraries(
    depth_first_search_test 
    PRIVATE gtest_main
    PRIVATE depth_first_search
)

gtest_discover_tests(depth_first_search_test)