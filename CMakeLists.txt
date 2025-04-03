cmake_minimum_required(VERSION 3.10)
project(TestingProject)

set(CMAKE_CXX_STANDARD 17)

# Добавление GoogleTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Добавление исходных файлов
add_executable(runTests test.cpp)
target_link_libraries(runTests GTest::GTest GTest::Main pthread)
