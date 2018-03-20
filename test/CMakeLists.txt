
macro(test exe)
    add_executable(${exe} ${exe}.cpp)
    add_test(NAME ${exe}_test COMMAND ${exe})
endmacro(test)

test(vector)

