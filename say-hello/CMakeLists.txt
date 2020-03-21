add_library(
    say-hello
    src/say-hello/hello.hpp
    src/say-hello/hello.cpp
    )

target_include_directories(say-hello PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src")

# Three are 3 main type introduced here
#   PUBLIC        - where the version propagates everywhere
#   PRIVATE       - where main.cpp cannot access version
#   INTERFACE     - opposite of private and hello.cpp cannot access version
target_compile_definitions(say-hello PUBLIC SAY_HELLO_VERSION=4)