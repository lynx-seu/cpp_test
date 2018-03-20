
cmake_minimum_required(VERSION 3.2)
project(main CXX)

## add testing 
option(WITH_TESTS "enable unit tests." TRUE)
if (WITH_TESTS)
    enable_testing()
    add_subdirectory(test)
endif()

#include_directories()
#link_directories()
#add_subdirectory()

aux_source_directory(src src_list)
message("${src_list}")
add_executable(${PROJECT_NAME} ${src_list})

