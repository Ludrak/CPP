
#pragma once

#include <string>
#include <iostream>
#include "Weapon.hpp"

#define DEFAULT_WEAPON "gun"

class   HumanA
{
    private:
        std::string _name;
        Weapon      &_weapon;

    public:
        HumanA(const std::string &name, Weapon &weapon);

        void        attack(void) const;
};