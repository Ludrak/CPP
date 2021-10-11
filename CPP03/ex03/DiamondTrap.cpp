
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
    this->_hitpoints = FragTrap::_hitpoints;
    this->_energy_points = ScavTrap::_energy_points;
    this->_attack_damage = FragTrap::_attack_damage;
    DiamondTrap::_name = name;
    std::cout << "Instatiated DiamondTrap : " << DiamondTrap::_name << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
    std::cout << "Destroyed DiamondTrap " << DiamondTrap::_name << std::endl;
}

void    DiamondTrap::whoAmI(void) const
{
    std::cout << "Diamond trap name: [" << DiamondTrap::_name << "] Clap Trap name: [" << ClapTrap::_name << "]" << std::endl;
}

void    DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}
