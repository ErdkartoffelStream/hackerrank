cmake_minimum_required (VERSION 3.18)

project(myMath)

add_compile_options(-Wall -Wextra -pedantic -Werror)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)

set(source_dir "${PROJECT_SOURCE_DIR}/")

file (GLOB source_files "${source_dir}/${PROJECT_NAME}.cpp")

add_library(${PROJECT_NAME} ${source_files})
