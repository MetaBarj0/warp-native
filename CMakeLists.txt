cmake_minimum_required( VERSION 3.12 FATAL_ERROR )

project( warp-native LANGUAGES CXX )

find_program( GIT_PROGRAM git )

if( ${GIT_PROGRAM} STREQUAL "GIT_PROGRAM-NOTFOUND" )
  message( FATAL_ERROR
           "The git program is not found on you system but is needed.\n"
           "Exiting..." )
endif()

execute_process( COMMAND git submodule deinit -f --all )
execute_process( COMMAND git submodule update --init --recursive )

include( src/CMakeLists.txt )
include( src/plugins/CMakeLists.txt )

target_link_libraries( warp-native message )
