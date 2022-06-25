cmake_minimum_required(VERSION 3.16.3)

project(FindkthSmallestElement
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(find_kth_smallest_element STATIC find_kth_smallest_element.cpp)

add_executable(find_kth_smallest_element_test find_kth_smallest_element_unittest.cpp)

target_link_libraries(
    find_kth_smallest_element_test 
    PRIVATE gtest_main
    PRIVATE find_kth_smallest_element
)

gtest_discover_tests(find_kth_smallest_element_test)