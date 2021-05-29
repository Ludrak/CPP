
#include "Brain.hpp"

Brain::Brain() { };

std::string Brain::identify(void) const
{
    const void *addr = static_cast<const void *>(this);
    std::stringstream ss;
    ss << addr;
    return (ss.str());
}

