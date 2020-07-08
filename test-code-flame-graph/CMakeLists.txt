cmake_minimum_required(VERSION 3.5.1)
project(test-code-flame-graph)

set(CMAKE_CXX_STANDARD 11)

add_executable(1_fibonacci_number ${PROJECT_SOURCE_DIR}/src/fibonacci.cpp ${PROJECT_SOURCE_DIR}/src/main.cpp ${PROJECT_SOURCE_DIR}/include/shared/fibonacci.h)

