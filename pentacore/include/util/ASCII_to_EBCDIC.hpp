//! \file ASCII_to_EBCDIC.hpp
//! \author Joe Turner <joe.turner@infinity-surge.com>
//!
//! \copyright
//! Copyright (c) 2024 Infinity Surge Inc.
//!
//! This program is free software: you can redistribute it and/or modify
//! it under the terms of the GNU General Public License as published by
//! the Free Software Foundation, version 2.
//!
//! This program is distributed in the hope that it will be useful, but
//! WITHOUT ANY WARRANTY; without even the implied warranty of
//! MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
//! General Public License for more details.
//!
//! You should have received a copy of the GNU General Public License
//! along with this program. If not, see <http://www.gnu.org/licenses/>.
#ifndef _ASCII_TO_EBCDIC_HPP_
#define _ASCII_TO_EBCDIC_HPP_

#include <string>
#include <sstream>

namespace infinity
{
    namespace utility
    {

        std::string asciiToebcdic(const std::string &source)
        {

            const static unsigned char AsciiToEbcdicTable[256] = {
                0, 1, 2, 3, 55, 45, 46, 47, 22, 5, 37, 11, 12, 13, 14,
                15, 16, 17, 18, 19, 60, 61, 50, 38, 24, 25, 63, 39, 28, 29,
                30, 31, 64, 79, 127, 123, 91, 108, 80, 125, 77, 93, 92, 78, 107,
                96, 75, 97, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 122, 94,
                76, 126, 110, 111, 124, 193, 194, 195, 196, 197, 198, 199, 200, 201, 209,
                210, 211, 212, 213, 214, 215, 216, 217, 226, 227, 228, 229, 230, 231, 232,
                233, 74, 224, 90, 95, 109, 121, 129, 130, 131, 132, 133, 134, 135, 136,
                137, 145, 146, 147, 148, 149, 150, 151, 152, 153, 162, 163, 164, 165, 166,
                167, 168, 169, 192, 106, 208, 161, 7, 32, 33, 34, 35, 36, 21, 6,
                23, 40, 41, 42, 43, 44, 9, 10, 27, 48, 49, 26, 51, 52, 53,
                54, 8, 56, 57, 58, 59, 4, 20, 62, 225, 65, 66, 67, 68, 69,
                70, 71, 72, 73, 81, 82, 83, 84, 85, 86, 87, 88, 89, 98, 99,
                100, 101, 102, 103, 104, 105, 112, 113, 114, 115, 116, 117, 118, 119, 120,
                128, 138, 139, 140, 141, 142, 143, 144, 154, 155, 156, 157, 158, 159, 160,
                170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184,
                185, 186, 187, 188, 189, 190, 191, 202, 203, 204, 205, 206, 207, 218, 219,
                220, 221, 222, 223, 234, 235, 236, 237, 238, 239, 250, 251, 252, 253, 254,
                255};

            std::ostringstream oss;
            size_t len = source.size();

            // Perform lookup and assign
            for (unsigned int i = 0; i < len; i++)
            {
                oss << AsciiToEbcdicTable[(unsigned char)source[i]];
            }

            return oss.str();
        }

    }
}

#endif