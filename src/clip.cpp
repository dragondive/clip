#include <iostream>
#include "clip.h"
#include "command.h"
#include "option.h"

void clip_test()
{
    auto command
    {
        Clip::Command("finance")
        .subcommand(Clip::Command("buy_stock"))
            .option(Clip::Option<std::string>("symbol"))
            .option(Clip::Option<std::string>("quantity"))
            .option(Clip::Option<std::string>("price"))
        .subcommand(Clip::Command("sell_stock")
            .option(Clip::Option<std::string>("symbol")))
            .option(Clip::Option<std::string>("quantity"))
            .option(Clip::Option<std::string>("price"))
        .subcommand(Clip::Command("show_portfolio"))
        .option(Clip::Option<int>("help"))
    };

    std::cout << command.describe() << std::endl;
}
