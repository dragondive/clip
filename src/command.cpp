#include "command.h"
// #include <iostream>
#include <algorithm>
// #include <utility>

#include <string>
namespace Clip
{
    Command& Command::subcommand(Command command)
    {
        selections.push_back(std::make_shared<Command>(command));
        return *this;
    }

    std::string Command::describe() const
    {
        std::string description;
        description += unique_name_;

        // for (const auto& selection : selections)
        // {
        //     description += "\n" + selection->describe();
        // }

        ranges::for_each(selections, [&](){ description += "\n" + selection->describe(); });
        return description;
    }
}