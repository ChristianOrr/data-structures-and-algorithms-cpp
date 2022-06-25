cmake_minimum_required(VERSION 3.16.3)

project(HouseRobber
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(house_robber STATIC house_robber.cpp)

add_executable(house_robber_test house_robber_unittest.cpp)

target_link_libraries(
    house_robber_test 
    PRIVATE gtest_main
    PRIVATE house_robber
)

gtest_discover_tests(house_robber_test)