
#pragma once

#include "Brain.hpp"

class Human
{
    private:
        Brain brain;

    public:
        Human();
        std::string identify(void) const;

        Brain   &getBrain(void) const;
        void    setBrain(const Brain &brain);
};
