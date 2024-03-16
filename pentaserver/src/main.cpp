#include <stdio.h>
#include <httplib.h>

#include "spdlog/spdlog.h"

#include <Configuration.hpp>

using namespace infinity;

int main()
{
    spdlog::info("Welcome to spdlog version {}.{}.{}  !", SPDLOG_VER_MAJOR, SPDLOG_VER_MINOR,
                 SPDLOG_VER_PATCH);

    PentaLedgerConfiguration cfg;
    if (!cfg.load())
    {
        spdlog::critical("Configuration failed to load.");
    }
    
    // printf("Hello world.\n");

    // // HTTP
    // httplib::Server svr;

    // // HTTPS
    // //httplib::SSLServer svr;

    // svr.Get("/hi", [](const httplib::Request &, httplib::Response &res)
    //         { res.set_content("Hello World!", "text/plain"); });

    // svr.listen("0.0.0.0", 8181);
}
