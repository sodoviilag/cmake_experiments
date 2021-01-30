message("Building MyImplementationLib")

project(MyImplementationLib)

add_library(MyImplementationLib STATIC ${CMAKE_CURRENT_SOURCE_DIR}/MyLib.cpp)

target_include_directories(MyImplementationLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

install(TARGETS MyImplementationLib DESTINATION lib)
install(FILES MyLib.hpp DESTINATION include)