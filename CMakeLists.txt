cmake_minimum_required(VERSION 3.18.2)

project(QuantityMeasurement)

add_subdirectory(googletest)

include_directories(googletest/include)

add_executable(executeTests main/model/quantity_measurement.cpp main/model/quantity_measurement.h main/model/feet.cpp main/model/feet.h test/quantity_measurement_test.cpp)

target_link_libraries(executeTests PRIVATE gtest)