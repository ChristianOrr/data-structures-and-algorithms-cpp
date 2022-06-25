cmake_minimum_required(VERSION 3.16.3)

project(CoinChange
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(coin_change STATIC coin_change.cpp)

add_executable(coin_change_test coin_change_unittest.cpp)

target_link_libraries(
    coin_change_test 
    PRIVATE gtest_main
    PRIVATE coin_change
)

gtest_discover_tests(coin_change_test)