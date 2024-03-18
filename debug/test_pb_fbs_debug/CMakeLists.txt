# Copyright (c) 2023 dingodb.com, Inc. All Rights Reserved
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

cmake_minimum_required(VERSION 3.23.1 FATAL_ERROR)
project(flatbuffer_test C CXX)

message(STATUS CMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE})
message(STATUS THIRD_PARTY_BUILD_TYPE=${THIRD_PARTY_BUILD_TYPE})

set(CMAKE_C_FLAGS_DEBUG "$ENV{CFLAGS} -Wall -O0  -g3 -ggdb")
set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -Wall -O0  -g3 -ggdb")

message(STATUS "CMAKE_CXX_STANDARD: ${CMAKE_CXX_STANDARD}")

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

include(CheckCXXCompilerFlag)
if(CMAKE_CXX_STANDARD EQUAL 23)
  check_cxx_compiler_flag("-std=c++23" COMPILER_SUPPORTS_CXX23)
  if(COMPILER_SUPPORTS_CXX23)
    set(CMAKE_CXX_STANDARD 23)
    set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
  else()
    message(
      FATAL_ERROR
        "The compiler ${CMAKE_CXX_COMPILER} has no C++23 support. Please use a different C++ compiler."
    )
  endif()
elseif(CMAKE_CXX_STANDARD EQUAL 20)
  check_cxx_compiler_flag("-std=c++20" COMPILER_SUPPORTS_CXX20)
  if(COMPILER_SUPPORTS_CXX20)
    set(CMAKE_CXX_STANDARD 20)
    set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
  else()
    message(
      FATAL_ERROR
        "The compiler ${CMAKE_CXX_COMPILER} has no C++20 support. Please use a different C++ compiler."
    )
  endif()
else()
  message(STATUS "CMAKE_CXX_STANDARD: ${CMAKE_CXX_STANDARD} change to c++17")
  check_cxx_compiler_flag("-std=c++17" COMPILER_SUPPORTS_CXX17)
  if(COMPILER_SUPPORTS_CXX17)
    set(CMAKE_CXX_STANDARD 17)
    set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
  else()
    message(
      FATAL_ERROR
        "The compiler ${CMAKE_CXX_COMPILER} has no C++17 support. Please use a different C++ compiler."
    )
  endif()
endif()

if(CMAKE_CXX_STANDARD EQUAL 23)
  set(CMAKE_CXX_STANDARD 23)
elseif(CMAKE_CXX_STANDARD EQUAL 20)
  set(CMAKE_CXX_STANDARD 20)
else()
  set(CMAKE_CXX_STANDARD 17)
endif()

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Avoid warning about DOWNLOAD_EXTRACT_TIMESTAMP in CMake 3.24:
if(CMAKE_VERSION VERSION_GREATER_EQUAL "3.24.0")
  cmake_policy(SET CMP0135 NEW)
endif()

include_directories("/home/server/app/protobuf-debug/include")
include_directories("/home/server/app/flatbuffers-v24.3.6-debug/include")

link_directories("/home/server/app/protobuf-debug/lib64")
link_directories("/home/server/app/flatbuffers-v24.3.6-debug/lib64")

link_libraries(protobufd protobuf-lited)
link_libraries(flatbuffers)

add_executable(main pb_create.cc fbs_create.cc general.cc common.pb.cc pb_test.cc fbs_test.cc main.cc)
