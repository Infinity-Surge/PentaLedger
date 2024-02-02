# Unit Tests
#
# This is part of the PentaLedger software project.
#
# Copyright (C) 2024  Infinity Surge Inc.
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <https://www.gnu.org/licenses/>.

if(CONFIG_UNIT_TESTS)
enable_testing()

add_executable(
  test_pentacore
  main_test.cpp
  leap_year_test.cpp
  Environment_test.cpp
)
target_compile_definitions(test_pentacore PUBLIC BOOST_TEST_DYN_LINK)
target_link_libraries(test_pentacore Boost::unit_test_framework)

add_test(test_pentacore test_pentacore)

endif(CONFIG_UNIT_TESTS)