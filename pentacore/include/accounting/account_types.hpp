// SPDX-License-Identifier: GPL-2.0-only
//! \file account_types.hpp
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
#ifndef _ACCOUNT_TYPES_HPP_
#define _ACCOUNT_TYPES_HPP_

enum class AccountType : char 
{
    ASSET = 0x01,
    LIABILITIES = 0x02,
    EQUITY = 0x03,
    INCOME = 0x04,
    EXPENSES = 0x05,
};

#endif
