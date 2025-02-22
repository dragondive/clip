#ifndef OPTION_H
#define OPTION_H

#include "selection.h"

#include <string>
#include <optional>

namespace Clip
{
    template<typename ValueType>
    class Option : public AbstractSelection
    {
    public:
        using AbstractSelection::AbstractSelection;
        virtual std::string describe() const override;
    };
} // namespace Clip

#include "option.tpp"

#endif // OPTION_H
