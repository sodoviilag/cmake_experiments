cmake_minimum_required (VERSION 3.19)

message("Building MyCMakeExperiments")

set( CMAKE_INSTALL_PREFIX ".")

set( CMAKE_TOOLCHAIN_FILE myToolchain/toolchainfile.txt)

project (MyCMakeExperiments VERSION 0.1 LANGUAGES CXX)

include(GNUInstallDirs)

add_executable(MyCMakeExperiments main.cpp)

add_subdirectory(myInterfaceLib)
add_subdirectory(myImplementationLib)

target_link_libraries(MyCMakeExperiments  
    PUBLIC 
        myInterfaceLib
        ${MYIMPLEMENTATIONLIB}
)

