cmake_minimum_required (VERSION 3.19)

project (MyCMakeExperiments VERSION 0.1 LANGUAGES CXX)

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})

include(GNUInstallDirs)

add_subdirectory(myInterfaceLib)

add_executable(MyCMakeExperiments main.cpp)

target_link_libraries(MyCMakeExperiments PUBLIC myInterfaceLib)