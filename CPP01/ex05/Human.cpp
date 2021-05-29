
#include "Human.hpp"

Human::Human(void) { this->brain = Brain(); };

std::string Human::identify(void) const
{
    return (this->brain.identify());
}

Brain       &Human::getBrain(void) const
{
    return (const_cast<Brain &>(this->brain));
}

void        Human::setBrain(const Brain &brain)
{
    this->brain = brain;
}
