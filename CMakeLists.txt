cmake_minimum_required( VERSION 3.12 FATAL_ERROR )

project( warp-native LANGUAGES CXX )

include( src/CMakeLists.txt )
include( src/plugins/CMakeLists.txt )
include( tests/CMakeLists.txt )

target_link_libraries( warp-native message )

enable_testing()

add_test( NAME unit_tests
          COMMAND $<TARGET_FILE:unit_tests> )
