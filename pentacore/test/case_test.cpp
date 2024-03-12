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
#include "util/case.hpp"

using namespace infinity::utility;

BOOST_AUTO_TEST_CASE( test_toUpper ) {
    std::string hello = "hello";
    std::string HELLO = "HELLO";

    toUpper(hello);
    BOOST_CHECK_EQUAL(hello, HELLO);
}

BOOST_AUTO_TEST_CASE( test_toLower ) {
    std::string hello = "hello";
    std::string HELLO = "HELLO";

    toLower(HELLO);
    BOOST_CHECK_EQUAL(hello, HELLO);
}

BOOST_AUTO_TEST_CASE( test_returnUpper ) {
    std::string hello = "hello";
    std::string HELLO = "HELLO";

    hello = returnUpper(hello);
    BOOST_CHECK_EQUAL(hello, HELLO);
}

BOOST_AUTO_TEST_CASE( test_returnLower ) {
    std::string hello = "hello";
    std::string HELLO = "HELLO";

    HELLO = returnLower(hello);
    
    BOOST_CHECK_EQUAL(hello, HELLO);
}
