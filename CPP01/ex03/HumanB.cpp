
#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : name(name), weapon(NULL) { }

void        HumanB::attack(void) const
{
    if (!weapon)
        return;
    std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
}

Weapon      &HumanB::getWeapon(void) const
{
    return (const_cast<Weapon &>(*this->weapon));
}

void        HumanB::setWeapon(Weapon *const weapon)
{
    this->weapon = weapon;
}
