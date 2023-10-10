cmake_minimum_required(VERSION 3.25.3)

project(
   pIntegrationRdcXnf_cB_LATEST
   VERSION 0.1
)

SET(CMAKE_CXX_STANDARD 20)
SET(CMAKE_CXX_STANDARD_REQUIRED True)

add_definitions(
   -g
#  -std=c2x TBD: coexist c and c++
   -Wall
   -Werror
   -Wextra
   -pedantic
   -Wuninitialized
)

add_executable(
   pIntegrationRdcXnf_cB_LATEST

   ${PROJECT_SOURCE_DIR}/source/SwcApplTpms/SwcApplTpms.cpp
   ${PROJECT_SOURCE_DIR}/source/stubs/stubs.cpp
)

target_include_directories(
   pIntegrationRdcXnf_cB_LATEST PUBLIC

   "${PROJECT_SOURCE_DIR}/source/common"
   "${PROJECT_SOURCE_DIR}/source/stubs"
   "${PROJECT_SOURCE_DIR}/source/RDCi_wrapper"
)

