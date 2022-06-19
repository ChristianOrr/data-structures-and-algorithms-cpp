cmake_minimum_required(VERSION 3.16.3)

project(BranchSums 
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(branch_sums STATIC branch_sums.cpp)

add_executable(branch_sums_test branch_sums_unittest.cpp)

target_link_libraries(
    branch_sums_test 
    PRIVATE gtest_main
    PRIVATE branch_sums
)

gtest_discover_tests(branch_sums_test)