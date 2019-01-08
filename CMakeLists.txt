cmake_minimum_required( VERSION 3.12 FATAL_ERROR )

project( warp-native LANGUAGES CXX )

include( src/CMakeLists.txt )
include( src/plugins/CMakeLists.txt )

target_link_libraries( warp-native message )
