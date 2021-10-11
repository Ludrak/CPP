
#pragma once

#include "ClapTrap.hpp"

#include <iostream>
#include <string>

class FragTrap : public virtual ClapTrap
{   
    public:
        FragTrap(std::string name);
        ~FragTrap(void);

        void    highFiveGuys(void) const;
};