cmake_minimum_required(VERSION 2.8)

# guard against in-source builds (got this from Eigen)
if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
    message(FATAL_ERROR "In-source builds not allowed. Please make a new directory (called a build directory) and run CMake from there. You may need to remove CMakeCache.txt. ")
endif()


#add the customised package searches to the module path
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)


find_package(Boost REQUIRED COMPONENTS unit_test_framework)
find_package(HEALPix REQUIRED)

include_directories(${Boost_INCLUDE_DIRS})
include_directories(${HEALPix_INCLUDE_DIRS})

set(PCL_DEPEND_LIBS
    ${Boost_LIBRARIES}
    ${HEALPix_LIBRARIES})

enable_testing()
add_subdirectory(tests)
