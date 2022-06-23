cmake_minimum_required(VERSION 3.16.3)

project(DataStructuresAndAlgorithms 
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

include(GoogleTest)

add_subdirectory(./arrays)
add_subdirectory(./backtracking)
add_subdirectory(./dynamic_programming_1d)
add_subdirectory(./intervals)
add_subdirectory(./strings)
add_subdirectory(./linked_lists)
add_subdirectory(./binary_trees)
add_subdirectory(./graphs)
add_subdirectory(./recursion)
add_subdirectory(./searching)
add_subdirectory(./greedy)
add_subdirectory(./two_pointers)
add_subdirectory(./stacks)
add_subdirectory(./sliding_window)
add_subdirectory(./binary_search_trees)
