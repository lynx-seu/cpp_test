
cmake_minimum_required(VERSION 3.2)
project(main CXX)

include(cmake/internal_utils.cmake)
config_compiler_and_linker()  # Defined in internal_utils.cmake.

# enable c++11
set(CMAKE_CXX_STANDARD 11)

# default cxx flag
set(cxx_default "-g ${cxx_default}")

# macro
macro(cxx_execute name)
    message("D: cxx default flags: " "${cxx_default}")
    message("D: cxx src list: " "${ARGN}")
    cxx_executable_with_flags(${name} "${cxx_default}" "" "${ARGN}")
endmacro()

# Where .h files can be found.
include_directories()

# Where libraries can be found.
link_directories()

aux_source_directory(src src_list)
cxx_execute(${PROJECT_NAME} ${src_list})

