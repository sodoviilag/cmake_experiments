message("Building myInterfaceLib")

project (myInterfaceLib VERSION 1.0 LANGUAGES CXX)

add_library(myInterfaceLib INTERFACE)

target_include_directories(myInterfaceLib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
