
cmake_minimum_required(VERSION 3.2)
project(main CXX)

## cflag
set(CMAKE_CXX_FLAGS "-g -Wall")

## add testing 
option(WITH_TESTS "enable unit tests." TRUE)
if (WITH_TESTS)
    add_subdirectory(test/lib/gtest-1.6.0)

    enable_testing()

    # Include the gtest library. gtest_SOURCE_DIR is available due to
    # 'project(gtest)' above.
    include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

    macro(test exe)
        add_executable(${exe} test/${exe}.cpp)
        target_link_libraries(${exe} gtest gtest_main)
        add_test(
            NAME ${exe}_test 
            COMMAND ${exe}
        )
    endmacro(test)

    test(vector)
endif()

#include_directories()
#link_directories()
#add_subdirectory()

aux_source_directory(src src_list)
message("${src_list}")
add_executable(${PROJECT_NAME} ${src_list})

