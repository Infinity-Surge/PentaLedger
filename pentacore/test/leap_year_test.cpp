//! \file leap_year_test.cpp
//! \author Joe Turner <joe.turner@infinity-surge.com>
//!
//! \copyright
//! Copyright (c) 2024 Joe Turner.
//!
//! This program is free software; you can redistribute it and/or
//! modify it under the terms of the GNU General Public License
//! as published by the Free Software Foundation; either version 2
//! of the License, or (at your option) any later version.
//! 
//! This program is distributed in the hope that it will be useful,
//! but WITHOUT ANY WARRANTY; without even the implied warranty of
//! MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//! GNU General Public License for more details.
//! 
//! You should have received a copy of the GNU General Public License
//! along with this program; If not, see <http://www.gnu.org/licenses/>.
#include <boost/test/unit_test.hpp>
#include "time/leap_year.hpp"

using namespace infinity::time;

BOOST_AUTO_TEST_SUITE(TestTime)

BOOST_AUTO_TEST_CASE(test_is_leap_year)
{
    // 2020 is a leap year.
    BOOST_CHECK_EQUAL(true, isLeapYear(2020));
}

BOOST_AUTO_TEST_CASE(test_is_not_leap_year)
{
    // 2020 is a leap year.
    BOOST_CHECK_EQUAL(false, isLeapYear(2021));
}
BOOST_AUTO_TEST_SUITE_END() 
