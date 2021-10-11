
#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
    private:
        std::string _name;
        uint32_t    _hitpoints;
        uint32_t    _energy_points;
        uint32_t    _attack_damage;
    
    public:
        ClapTrap(std::string name);
        ~ClapTrap(void);

        void    attack(std::string const &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};