#ifndef COMMAND_TPP
#define COMMAND_TPP

namespace Clip
{
    template<typename ValueType>
    Command& Command::option(Option<ValueType> option)
    {
        selections.push_back(std::make_shared<Option<ValueType>>(option));
        return *this;
    }
}

#endif // COMMAND_TPP