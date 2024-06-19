cmake_minimum_required(VERSION 3.22.1)
project(snake)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(VENDOR_DIR ${CMAKE_CURRENT_SOURCE_DIR}/vendor)
set(SRC_DIR    ${CMAKE_CURRENT_SOURCE_DIR}/src)

add_executable(${PROJECT_NAME}
    ${SRC_DIR}/main.c
    ${VENDOR_DIR}/glad/src/glad.c
)

target_include_directories(${PROJECT_NAME}
    PUBLIC ${VENDOR_DIR}/glad/include
)