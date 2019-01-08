add_library( message-object-files
             OBJECT
             src/plugins/message.hpp
             src/plugins/message.cpp )

target_compile_features( message-object-files
                         PUBLIC
                         cxx_std_17 )

set_target_properties( message-object-files
                       PROPERTIES
                       POSITION_INDEPENDENT_CODE 1 )

add_library( message
             SHARED 
             $<TARGET_OBJECTS:message-object-files> )

# set_target_properties( message
#                        PROPERTIES
#                        CXX_VISIBILITY_PRESET hidden
#                        VISIBILITY_INLINES_HIDDEN 1 )

set_target_properties( message
                       PROPERTIES
                       CXX_VISIBILITY_PRESET default
                       VISIBILITY_INLINES_HIDDEN 0 )
