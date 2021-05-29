
#pragma once

#include <string>
#include <iostream>
#include "Weapon.hpp"

#define DEFAULT_WEAPON "gun"

class   HumanB
{
    private:
        std::string name;
        Weapon      *weapon;
    public:
        HumanB(void);
        HumanB(const std::string &name);

        void        attack(void) const;

        void        setWeapon(Weapon *weapon);
        Weapon      &getWeapon(void) const;
};