// SPDX-License-Identifier: GPL-2.0-only
//! \file Configuration.hpp
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
#ifndef _PENTALEDGER_CONFIG_HPP_
#define _PENTALEDGER_CONFIG_HPP_
#include "nlohmann/json.hpp"

using json = nlohmann::json;

namespace infinity
{
    struct configInfo
    {
        std::string data_dir;
        std::string www_path;
    };

    //! \brief PentaLedger configuration file
    //!
    class PentaLedgerConfiguration
    {
    public:

        int load();
        int create();

    private:
        std::string _path;
        configInfo _config;
        
        void from_json(const json &j, configInfo &c);
        void to_json(json &j, const configInfo &c);

    };

} // infinity

#endif
