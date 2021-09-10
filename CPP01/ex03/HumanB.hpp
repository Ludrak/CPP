
#pragma once

#include <string>
#include <iostream>
#include "Weapon.hpp"

#define DEFAULT_WEAPON "gun"

class   HumanB
{
    private:
        std::string _name;
        Weapon      *_weapon;

    public:
        HumanB(void);
        HumanB(const std::string &name);

        void        attack(void) const;

        void        setWeapon(Weapon *const weapon);
        Weapon      &getWeapon(void) const;
};