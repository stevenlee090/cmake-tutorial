cmake_minimum_required(VERSION 3.12)

# all variables in cmake are of type "string"
# MyProject, VERSION, 1.0.0 are all strings
project(MyProject VERSION 1.0.0)

# this prints the message in quotes
message(STATUS "I am a message")

# set a variable
set(MY_VAR "I AM A VAR")
message(STATUS "The variable value is : ${MY_VAR}")

# print project name and version
message(STATUS "The project name is : ${PROJECT_NAME}")
message(STATUS "The project version is : ${PROJECT_VERSION}")

# add_subdirectory(say-hello)
# add_subdirectory(hello-exe)
