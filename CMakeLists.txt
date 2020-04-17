cmake_minimum_required( VERSION 3.10 )

project( example
    LANGUAGES CXX
    )

find_program( CPPCHECK cppcheck REQUIRED )
set( CMAKE_CXX_CPPCHECK ${CPPCHECK} --xml --xml-version=2 --enable=all --std=c++11 )

set( EXAMPLE_SRCS
    example.cpp
    ErrorClass.cpp
    )
add_executable( example ${EXAMPLE_SRCS} )
