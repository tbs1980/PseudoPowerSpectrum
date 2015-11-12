cmake_minimum_required(VERSION 2.8)

project(pseudo_power_spectrum_test_healpix_io CXX)

file(GLOB test_srcs "*.cpp")

foreach(test_src ${test_srcs})
    get_filename_component(test ${test_src} NAME_WE)
    add_executable(test_${test} ${test_src})
    target_link_libraries(test_${test} ${PCL_DEPEND_LIBS})
    add_test(healpix_io_${test} test_${test})
endforeach(test_src)
