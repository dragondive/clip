#ifndef SELECTION_H
#define SELECTION_H

#include <string>

namespace Clip
{
    class AbstractSelection
    {
    public:
        AbstractSelection(std::string unique_name)
            : unique_name_{unique_name}
        {}

        virtual std::string describe() const = 0;

    protected:
        std::string unique_name_;
    };
} // namespace Clip

#endif // SELECTION_H