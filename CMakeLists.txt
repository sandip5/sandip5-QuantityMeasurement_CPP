cmake_minimum_required(VERSION 3.18.2)

project(QuantityMeasurement)

add_subdirectory(googletest)

include_directories(googletest/include)

add_executable(executeTests main/utility/unit.cpp main/utility/unit.h main/utility/utils.h main/model/quantity.h main/model/quantity.cpp main/model/quantity_measurement.cpp main/model/quantity_measurement.h test/quantity_measurement_test.cpp)

target_link_libraries(executeTests PRIVATE gtest)