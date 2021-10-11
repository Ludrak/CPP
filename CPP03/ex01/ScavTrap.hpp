
#pragma once

#include "ClapTrap.hpp"

#include <iostream>
#include <string>

class ScavTrap : public virtual ClapTrap
{   
    public:
        ScavTrap(std::string name);
        ~ScavTrap(void);

        virtual void    attack(const std::string &target);
        void    guardGate(void) const;
};