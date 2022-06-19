cmake_minimum_required(VERSION 3.16.3)

project(Fibonacci 
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(fibonacci STATIC fibonacci.cpp)

add_executable(fibonacci_test fibonacci_unittest.cpp)

target_link_libraries(
    fibonacci_test 
    PRIVATE gtest_main
    PRIVATE fibonacci
)

gtest_discover_tests(fibonacci_test)