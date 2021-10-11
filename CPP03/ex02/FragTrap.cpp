
#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hitpoints = 100;
    _energy_points = 100;
    _attack_damage = 30;
    std::cout << "Instatiated FragTrap : " << name << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "Destroyed FragTrap " << this->_name << std::endl;
}

void    FragTrap::highFiveGuys(void) const
{
    std::cout << "FragTrap " << this->_name << " is giving you high five !" << std::endl;
}