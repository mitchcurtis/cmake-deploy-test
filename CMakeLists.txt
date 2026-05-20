cmake_minimum_required(VERSION 3.14)
project(cmakedeploytest VERSION 1.0.0 LANGUAGES CXX C)

find_package(Qt6 REQUIRED COMPONENTS QuickPrivate)
qt_standard_project_setup(REQUIRES 6.10)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(foo)
add_subdirectory(app)

