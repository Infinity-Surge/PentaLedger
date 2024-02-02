//! \file Environment_tst.hpp
//! \author Joe Turner <joe.turner@infinity-surge.com>
//!
//! \copyright
//! Copyright (c) 2024 Infinity Surge Inc.
//!
//! This program is free software: you can redistribute it and/or modify
//! it under the terms of the GNU General Public License as published by
//! the Free Software Foundation, version 3.
//!
//! This program is distributed in the hope that it will be useful, but
//! WITHOUT ANY WARRANTY; without even the implied warranty of
//! MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
//! General Public License for more details.
//!
//! You should have received a copy of the GNU General Public License
//! along with this program. If not, see <http://www.gnu.org/licenses/>.
#include <boost/test/unit_test.hpp>
#include "util/Environment.hpp"

using namespace infinity::utility;

BOOST_AUTO_TEST_SUITE(TestEnvironment)

BOOST_AUTO_TEST_CASE(test_ctor)
{
    Environment<std::string> env;
    BOOST_CHECK_EQUAL(true, true);
}

BOOST_AUTO_TEST_SUITE_END() 
