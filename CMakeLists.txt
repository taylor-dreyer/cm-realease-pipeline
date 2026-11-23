cmake_minimum_required(VERSION 3.16)
project(myapp C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

enable_testing()

add_subdirectory(libs/libmath)
add_subdirectory(libs/libutil)
add_subdirectory(third_party)
add_subdirectory(app)