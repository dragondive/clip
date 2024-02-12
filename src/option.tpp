#ifndef OPTION_TPP
#define OPTION_TPP

#include <format>

namespace Clip
{
    // template<typename ValueType>
    // Option<ValueType>::Option(std::string unique_id)
    //     : unique_id_{unique_id}
    // {}

    // template<typename ValueType>
    // Option<ValueType>& Option<ValueType>::description(std::string description)
    // {
    //     description_ = std::move(description);
    //     return *this;
    // }

    template<typename ValueType>
    std::string Option<ValueType>::describe() const
    {
        return std::format("--{}", unique_name_);
    }
}

#endif // OPTION_TPP