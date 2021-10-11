
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{

    DiamondTrap dtrap = DiamondTrap("Diamond");
    dtrap.attack("aaa");
    dtrap.takeDamage(30);
    dtrap.beRepaired(10);
    dtrap.guardGate();
    dtrap.highFiveGuys();
    dtrap.whoAmI();
    return (0);
}