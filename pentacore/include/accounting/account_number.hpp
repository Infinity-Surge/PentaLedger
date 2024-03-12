// SPDX-License-Identifier: GPL-2.0-only
//! \file account_number.hpp
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
#ifndef _ACCOUNT_HPP_
#define _ACCOUNT_HPP_
#include <stdint.h>

namespace infinity
{
namespace accounting
{
    union AccountNumber
    {
        uint32_t data;
        struct 
        {
            u_int8_t  account_type;
            u_int8_t  account_category;
            u_int8_t  account;
            u_int8_t  subaccount;
        };
        char bytes[4];
    };

}

}
#endif
