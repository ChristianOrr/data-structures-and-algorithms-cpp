cmake_minimum_required(VERSION 3.16.3)

project(BuyAndSellStock 
        VERSION 0.1 
        LANGUAGES CXX
)

add_library(buy_and_sell_stock STATIC buy_and_sell_stock.cpp)

add_executable(buy_and_sell_stock_test buy_and_sell_stock_unittest.cpp)

target_link_libraries(
    buy_and_sell_stock_test 
    PRIVATE gtest_main
    PRIVATE buy_and_sell_stock
)

gtest_discover_tests(buy_and_sell_stock_test)