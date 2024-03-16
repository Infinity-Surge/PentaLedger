# Dependencies
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

# Boost::unit_test_framework
if(CONFIG_UNIT_TESTS)
    message("** Config unit_test enabled")
    find_package(Boost COMPONENTS unit_test_framework REQUIRED)
    include_directories (${Boost_INCLUDE_DIRS})
endif()

find_package(spdlog REQUIRED)