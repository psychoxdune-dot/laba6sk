cmake_minimum_required(VERSION 3.10)
project(solver)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT DEFINED SOLVER_VERSION)
    set(SOLVER_VERSION "0.1.0.0")
endif()

add_library(solver_lib STATIC solver_lib/solver.cpp)
add_library(formatter_lib STATIC formatter_lib/formatter.cpp)
add_library(formatter_ex_lib STATIC formatter_ex_lib/formatter_ex.cpp)


target_link_libraries(formatter_ex_lib formatter_lib)

add_executable(solver solver_application/equation.cpp)

target_include_directories(solver PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/formatter_lib
    ${CMAKE_CURRENT_SOURCE_DIR}/formatter_ex_lib
    ${CMAKE_CURRENT_SOURCE_DIR}/solver_lib
)

target_include_directories(formatter_ex_lib PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/formatter_lib)

target_link_libraries(solver formatter_ex_lib solver_lib)

install(TARGETS solver RUNTIME DESTINATION bin)

include(CPackConfig.cmake)
