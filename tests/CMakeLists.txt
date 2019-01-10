add_executable( unit_tests
                tests/unit_tests.cpp )

target_compile_features( unit_tests PUBLIC cxx_std_17 )

find_program( GIT_PROGRAM git )

if( ${GIT_PROGRAM} STREQUAL "GIT_PROGRAM-NOTFOUND" )
  message( FATAL_ERROR
           "The git program is not found on you system but is needed.\n"
           "Exiting..." )
endif()

execute_process( COMMAND git submodule deinit -f --all
                 WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} )
execute_process( COMMAND git submodule update --init --recursive
                 WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} )

set( CATCH2_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Catch2/single_include" )

add_library( Catch2 INTERFACE )

target_include_directories( Catch2 INTERFACE
                            $<BUILD_INTERFACE:${CATCH2_INCLUDE_DIR}> )

target_link_libraries( unit_tests PRIVATE Catch2 )
