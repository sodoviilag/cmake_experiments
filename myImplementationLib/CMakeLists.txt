message("Building MyImplementationLib")

project (MyImplementationLib VERSION 1.0 LANGUAGES CXX)

add_library(MyImplementationLib STATIC ${CMAKE_CURRENT_SOURCE_DIR}/MyLib.cpp)

target_include_directories(MyImplementationLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
