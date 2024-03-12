// PentaLedger Unit test
// 
// Copyright (C) 2024  Infinity Surge Inc.
// 
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

#include <boost/test/unit_test.hpp>
#include "util/trim.hpp"

using namespace infinity::utility;

BOOST_AUTO_TEST_CASE( test_trim ) {
    std::string hello = " hello ";
    std::string HELLO = "hello";

    hello = trim(hello, ' ');
    BOOST_CHECK_EQUAL(hello, HELLO);
}

