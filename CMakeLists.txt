cmake_minimum_required(VERSION 3.12)

# all variables in cmake are of type "string"
# MyProject, VERSION, 1.0.0 are all strings
project(TopProject VERSION 1.0.0)

include(PrintVariables.cmake)

print_variables()

add_subdirectory(say-hello)

# specify the binary to be in 'example-binary-dir'
add_subdirectory(hello-exe example-binary-dir)
