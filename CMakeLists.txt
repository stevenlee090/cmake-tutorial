cmake_minimum_required(VERSION 3.12)

# all variables in cmake are of type "string"
# MyProject, VERSION, 1.0.0 are all strings
project(MyProject VERSION 1.0.0)

set(MY_STRING "This is a string")
set(MY_OTHER_STRING "This is a string")

set(my_value 4)

# if statement
if((MY_STRING STREQUAL MY_OTHER_STRING) AND ("1" EQUAL my_value))
    message(STATUS "Condition was met")
elseif(MY_OTHER_STRING MATCHES "string$")
    message(STATUS "Variable ends with the world 'string' ")
else()
    message(STATUS "Condition failed")
endif()

# while loop
while(my_value LESS 50)
    message(STATUS "Value is ${my_value}")
    math(EXPR my_value "${my_value} + 1")
endwhile()

# for loop
foreach(idx RANGE 0 99 5)
    # print out values from 0 to 99 in increment of 5
    message(STATUS "Item is : ${idx}")
endforeach()


# [stuff left over from part 1]
# add_subdirectory(say-hello)
# add_subdirectory(hello-exe)
