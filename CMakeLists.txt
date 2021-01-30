cmake_minimum_required (VERSION 3.19)

message("Building MyCMakeExperiments")

set( CMAKE_INSTALL_PREFIX ".")

set( CMAKE_TOOLCHAIN_FILE myToolchain/toolchainfile.txt)

project (MyCMakeExperiments VERSION 0.1 LANGUAGES CXX C ASM)

include(GNUInstallDirs)

add_executable(MyCMakeExperiments main.cpp)

#########################################################
# External Libraries
#########################################################
find_package( Boost 1.65.1 COMPONENTS program_options REQUIRED )
include_directories( ${Boost_INCLUDE_DIR} )

#########################################################
# Executable linked Libraries
#########################################################
target_link_libraries(MyCMakeExperiments  
    PUBLIC 
        myInterfaceLib
        MyImplementationLib
        ${Boost_LIBRARIES}
)

#########################################################
# Add project subdirectories
#########################################################
add_subdirectory(myInterfaceLib)
add_subdirectory(myImplementationLib)