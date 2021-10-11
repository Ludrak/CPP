
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    _hitpoints = 100;
    _energy_points = 50;
    _attack_damage = 20;
    std::cout << "Instatiated ScavTrap : " << name << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Destroyed ScavTrap " << this->_name << std::endl;
}

void    ScavTrap::attack(const std::string &target)
{
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage !" << std::endl;
}

void    ScavTrap::guardGate(void) const
{
    std::cout << "ScavTrap " << this->_name << " has entered GateKeeper mode." << std::endl;
}