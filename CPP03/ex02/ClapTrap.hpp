
#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
        std::string _name;
        uint32_t    _hitpoints;
        uint32_t    _energy_points;
        uint32_t    _attack_damage;
    
    public:
        ClapTrap(std::string name);
        ~ClapTrap(void);
        
        virtual void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};