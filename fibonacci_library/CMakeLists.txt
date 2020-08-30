cmake_minimum_required(VERSION 3.5)
set(CMAKE_CXX_STANDARD 11)
project(fibonacci_library)

############################################################
# Create a library
############################################################

#Generate the shared library from the library sources
add_library(fibonacci_library SHARED 
    src/fibonacci.cpp
)
add_library(fibonacci::library ALIAS fibonacci_library)

target_include_directories(fibonacci_library
    PUBLIC 
        ${PROJECT_SOURCE_DIR}/include
)

############################################################
# Create an executable
############################################################

# Add an executable with the above sources
add_executable(fibonacci_binary
    src/main.cpp
)

# link the new hello_library target with the hello_binary target
target_link_libraries( fibonacci_binary
    PRIVATE 
        fibonacci::library
)
