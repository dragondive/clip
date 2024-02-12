#ifndef COMMAND_H
#define COMMAND_H

#include "selection.h"
#include "option.h"

#include <vector>
#include <memory>

namespace Clip
{
    class Command : public AbstractSelection
    {
    public:
        Command& subcommand(Command subcommand);

        template<typename ValueType>
        Command& option(Option<ValueType> option);

    public:
        using AbstractSelection::AbstractSelection;
        virtual std::string describe() const override;
    
    protected:
        std::vector<std::shared_ptr<AbstractSelection>> selections;
    };
}

#include "command.tpp"

#endif // COMMAND_H