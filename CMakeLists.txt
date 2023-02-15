cmake_minimum_required(VERSION 3.7)
project(ctest-root)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(PkgConfig REQUIRED)
pkg_check_modules(gtest gtest>=1.10)

add_subdirectory(app)

if(NOT gtest_FOUND)
    message("Google test not installed, use it's source code from external folder!!!")
    add_subdirectory(external/googletest)
endif(NOT gtest_FOUND)

add_subdirectory(tests)
enable_testing()
add_test(NAME gtest_tests COMMAND tests/ctest-tests --gtest_output=xml:./ctest-tests.xml)
