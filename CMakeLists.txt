cmake_minimum_required(VERSION 3.21)
project(oyunProj LANGUAGES C)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)
add_executable(oyunProj ${CMAKE_CURRENT_SOURCE_DIR}/main/main.c ${CMAKE_CURRENT_SOURCE_DIR}/main/include/everything.c)
target_include_directories(oyunProj PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/main/include)