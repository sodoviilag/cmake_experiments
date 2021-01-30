message("Building MyImplementationLib")

add_library(MyImplementationLib "")


target_sources(MyImplementationLib
  PRIVATE
    MyLib.cpp
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/MyLib.hpp
  )

target_include_directories(MyImplementationLib
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )