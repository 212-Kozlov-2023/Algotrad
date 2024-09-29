cmake_minimum_required(VERSION 3.14)
project(Algotrad)

include_directories(include)

add_executable(main main.cpp my_add.cpp)

include(FetchContent)

# GoogleTest
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.15.2
)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_executable(tests test_add.cpp my_add.cpp)
target_link_libraries(tests gtest_main)

include(GoogleTest)
gtest_discover_tests(tests)

# Google Benchmark
FetchContent_Declare(
    googlebenchmark
    GIT_REPOSITORY https://github.com/google/benchmark.git
    GIT_TAG v1.8.0
)
FetchContent_MakeAvailable(googlebenchmark)

add_executable(my_benchmark benchmark_add.cpp my_add.cpp)
target_link_libraries(my_benchmark benchmark::benchmark)

