
#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) : _name(name), _weapon(weapon) {}

void    HumanA::attack(void) const
{
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}