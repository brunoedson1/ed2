cmake_minimum_required(VERSION 3.10)

project(HelloWorldProject)

add_library(Message Message.cpp Message.hpp)

add_executable(hello-world hello-world.cpp)

target_link_libraries(hello-world PRIVATE Message)

set_target_properties(hello-world PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/solution"
)
