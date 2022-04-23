cmake_minimum_required(VERSION 3.0.0)
CMAKE_MAKE_PROGRAM()
project(cmake-tut VERSION 0.1.0)

include(CTest)
enable_testing()
find_package(opencv REQUIRED)
add_executable(cmake-tut main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
