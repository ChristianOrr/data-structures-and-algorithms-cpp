cmake_minimum_required(VERSION 3.16.3)

project(Arrays 
        VERSION 0.1 
        LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git 
  GIT_TAG e2239ee6043f73722e7aa812a459f54a28552929
)

FetchContent_GetProperties(googletest)
if (NOT googletest_POPULATED)
    FetchContent_Populate(googletest)
    add_subdirectory(${googletest_SOURCE_DIR} ${googletest_BINARY_DIR})
endif()

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_library(two_sum STATIC two_sum.cpp)

add_executable(two_sum_test two_sum_unittest.cpp)

target_link_libraries(
    two_sum_test 
    PRIVATE gtest_main
    PRIVATE two_sum
)

include(GoogleTest)
gtest_discover_tests(two_sum_test)

