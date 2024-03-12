# PentaLedger CMake file
#
# Copyright (C) 2024  Infinity Surge Inc.
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <https://www.gnu.org/licenses/>.
cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

project(PentaLedger
    VERSION     0.1
    DESCRIPTION "PentaLedger"
    LANGUAGES   CXX
)

# check for in source build.
if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
    message(FATAL_ERROR "Change working directory to ./build.")
endif()

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake/modules" ${CMAKE_MODULE_PATH})

find_package(CompilerFlags REQUIRED MODULE)
find_package(ConditionalCxxFlag REQUIRED MODULE)

# CMAKE_MODULE_PATH is a CMAKE variable. It contains a list of paths 
# which could be used to search CMAKE modules by "include()" or "find_package()", but the default value is empty.
# Add cmake dir to search list
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

include(cmake/top.cmake)
include(cmake/dependencies.cmake)

if(CONFIG_DOXYGEN_GENERATION)
    message("** Config doxygen_generation enabled")
    include(documentation)
endif(CONFIG_DOXYGEN_GENERATION)

add_subdirectory(pentacore)

if(CONFIG_UNIT_TESTS)
    enable_testing()
    add_subdirectory(test)
endif(CONFIG_UNIT_TESTS)

include_directories(
    ${CMAKE_CURRENT_LIST_DIR}/third-party/include 
    )

add_subdirectory(pentaserver)
