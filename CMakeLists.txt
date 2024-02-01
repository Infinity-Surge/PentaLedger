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
cmake_minimum_required(VERSION 3.13)

project(PentaLedger
    VERSION     0.1
    DESCRIPTION "PentaLedger"
    LANGUAGES   CXX
)

include(cmake/top.cmake)

if(CONFIG_TEST_OPTION)

    message("Config test_option enabled")

endif()
