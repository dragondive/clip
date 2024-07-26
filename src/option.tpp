#ifndef OPTION_TPP
#define OPTION_TPP

#include <format>

namespace Clip
{
    template<typename ValueType>
    std::string Option<ValueType>::describe() const
    {
        return std::format("--{}", unique_name_);
    }
}

#endif // OPTION_TPP