cmake_minimum_required(VERSION 3.12)
project(MyProject VERSION 1.0.0)

# the default for add_library is to build a static library
# use cmake -D BUILD_SHARED_LIBS=TRUE to build a shared library instead
add_library(
    say-hello
    hello.hpp
    hello.cpp
    )

add_executable(cmake-good main.cpp)

target_link_libraries(cmake-good PRIVATE say-hello)