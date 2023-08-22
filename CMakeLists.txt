cmake_minimum_required(VERSION 3.10)

project(quick_sort)

set(CMAKE_CXX_STANDARD 11)

add_executable(quick_sort main.cc)

target_compile_options(quick_sort PRIVATE -Wall -Wextra -pedantic -Werror)

add_executable(tests main.cc)
target_link_libraries(tests ${GTEST_BOTH_LIBRARIES} pthread)
target_compile_options(tests PRIVATE -Wall -Wextra -pedantic -Werror)

enable_testing()
add_test(NAME QuicksortTest COMMAND tests)
