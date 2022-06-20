cmake_minimum_required(VERSION 3.16.3)

project(MinWaitingTime 
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(min_waiting_time STATIC min_waiting_time.cpp)

add_executable(min_waiting_time_test min_waiting_time_unittest.cpp)

target_link_libraries(
    min_waiting_time_test 
    PRIVATE gtest_main
    PRIVATE min_waiting_time
)

gtest_discover_tests(min_waiting_time_test)