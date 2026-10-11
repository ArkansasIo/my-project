cmake_minimum_required(VERSION 3.20)
project(nudl_expression_core VERSION 0.3.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include(CTest)

add_library(nudl_expression compiler/src/expression.cpp)
target_include_directories(nudl_expression PUBLIC compiler/include)

add_executable(nudlc compiler/src/main.cpp)
target_link_libraries(nudlc PRIVATE nudl_expression)

if(BUILD_TESTING)
  add_executable(nudl_expression_tests tests/test_expression.cpp)
  target_link_libraries(nudl_expression_tests PRIVATE nudl_expression)
  add_test(NAME nudl_expression_tests COMMAND nudl_expression_tests)
  add_test(NAME nudl_cli_eval COMMAND nudlc --eval "(2 + 3) * 4")
endif()
