cmake_minimum_required(VERSION 3.16.3)

project(ClimbingStairs
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(climbing_stairs STATIC climbing_stairs.cpp)

add_executable(climbing_stairs_test climbing_stairs_unittest.cpp)

target_link_libraries(
    climbing_stairs_test 
    PRIVATE gtest_main
    PRIVATE climbing_stairs
)

gtest_discover_tests(climbing_stairs_test)