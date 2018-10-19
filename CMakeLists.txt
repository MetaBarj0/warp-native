cmake_minimum_required( VERSION 3.12 FATAL_ERROR )

project( warp-native LANGUAGES CXX )

add_executable( warp-native
                src/main.cpp )

target_compile_features( warp-native PUBLIC cxx_std_17 )

add_library( message
             STATIC 
             src/plugins/message.hpp
             src/plugins/message.cpp )

target_compile_features( message PUBLIC cxx_std_17 )

target_link_libraries( warp-native message )
