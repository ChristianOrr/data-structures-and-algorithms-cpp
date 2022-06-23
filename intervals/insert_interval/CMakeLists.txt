cmake_minimum_required(VERSION 3.16.3)

project(InsertIntervals
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(insert_interval STATIC insert_interval.cpp)

add_executable(insert_interval_test insert_interval_unittest.cpp)

target_link_libraries(
    insert_interval_test 
    PRIVATE gtest_main
    PRIVATE insert_interval
)

gtest_discover_tests(insert_interval_test)