
#pragma once

#include "FragTrap.hpp"
#include "ScavTrap.hpp"


#include <iostream>
#include <string>

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string _name;

    public:
        DiamondTrap(std::string name);
        ~DiamondTrap(void);

        void    attack(const std::string &target);
        void    whoAmI(void) const;
};