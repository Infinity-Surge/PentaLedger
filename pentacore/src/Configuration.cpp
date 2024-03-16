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
#include <cstdint>
#include <filesystem>
#include <fstream>
#include <iostream>
#include "spdlog/spdlog.h"

#include <util/Environment.hpp>
#include <Configuration.hpp>

namespace fs = std::filesystem;
using namespace infinity::utility;

namespace infinity
{
    void PentaLedgerConfiguration::from_json(const json &j, configInfo &c)
    {
        c.data_dir = j.value("data_dir", "");
        c.www_path = j.value("www_path", "");
    }

    void PentaLedgerConfiguration::to_json(json &j, const configInfo &c)
    {
        j = json{{"data_dir", c.data_dir},
                 {"www_path", c.www_path},
        };
    };

    int PentaLedgerConfiguration::create()
    {
        int ret = 0;
        json j;
        to_json(j, _config);
        std::ofstream o(_path);
        o << std::setw(4) << j << std::endl;
        return ret;
    }

    int PentaLedgerConfiguration::load()
    {
        int ret = 0;

        Environment<std::string> env;
        const fs::path fspath{"/etc/pentaledger.cfg"};

        if (fs::exists(fspath))
        {
            spdlog::info("pentaledger system configuration found.");
            _path = fspath.string();
        }
        else
        {
            spdlog::info("pentaledger system configuration not found.");
            _path = env.home_path();
            _path += "/.pentaledger/pentaledger.cfg";
            if (fs::exists(_path))
            {
                spdlog::info("pentaledger system configuration found: {}", _path);
            }
            else
            {
                spdlog::warn("pentaledger system configuration not found: {}", _path);
                _path = env.home_path() + "/.pentaledger";
                fs::create_directory(_path.c_str());
                _path += "/pentaledger.cfg";
                return create();
            }
            spdlog::info("HOME: {}", env.home_path());
        }

        std::ifstream ifs(_path);
        json jf = json::parse(ifs);
        from_json(jf, _config);
        return ret;
    }

} // infinity