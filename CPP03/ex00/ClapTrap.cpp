
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
    : _name(name), _hitpoints(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "Instatiated ClapTrap : " << name << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destroyed ClapTrap " << this->_name << std::endl;
}

void    ClapTrap::attack(const std::string &target)
{
    std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage !" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount) 
{
    if (amount > this->_hitpoints)
        this->_hitpoints = 0;
    else
        this->_hitpoints -= amount;
    std::cout << this->_name << " lost " << amount << "HP, now at " << this->_hitpoints << "HP, energy is still at " << this->_energy_points << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount) 
{
    this->_hitpoints += amount;
    std::cout << this->_name << " recovered " << amount << "HP, now at " << this->_hitpoints << "HP, energy is still at " << this->_energy_points << std::endl;
}
