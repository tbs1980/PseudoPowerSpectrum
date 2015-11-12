cmake_minimum_required(VERSION 2.8)

find_package(Boost REQUIRED COMPONENTS unit_test_framework)

include_directories(${Boost_INCLUDE_DIRS})

set(PCL_DEPEND_LIBS
    ${Boost_LIBRARIES})

enable_testing()
add_subdirectory(tests)
