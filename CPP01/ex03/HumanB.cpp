
#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : _name(name), _weapon(NULL) { }

void        HumanB::attack(void) const
{
    if (!_weapon)
        return;
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

Weapon      &HumanB::getWeapon(void) const
{
    return (const_cast<Weapon &>(*this->_weapon));
}

void        HumanB::setWeapon(Weapon *const weapon)
{
    this->_weapon = weapon;
}
