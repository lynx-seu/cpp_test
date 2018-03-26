
cmake_minimum_required(VERSION 3.2)
project(main CXX)

include(cmake/internal_utils.cmake)
config_compiler_and_linker()  # Defined in internal_utils.cmake.

# macro to add executable
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

