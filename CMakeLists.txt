cmake_minimum_required( VERSION 3.12 FATAL_ERROR )

project( warp-native LANGUAGES CXX )

add_executable( warp-native
                src/main.cpp )

target_compile_features( warp-native PUBLIC cxx_std_17 )

add_library( message
             SHARED 
             src/plugins/message.hpp
             src/plugins/message.cpp )

# set_target_properties( message
#                        PROPERTIES
#                        CXX_VISIBILITY_PRESET hidden
#                        VISIBILITY_INLINES_HIDDEN 1 )

set_target_properties( message
                       PROPERTIES
                       CXX_VISIBILITY_PRESET default
                       VISIBILITY_INLINES_HIDDEN 0 )

target_compile_features( message PUBLIC cxx_std_17 )

target_link_libraries( warp-native message )
