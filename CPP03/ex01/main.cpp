
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap trap1 = ClapTrap("TR4P");
    ScavTrap trap2 = ScavTrap("TR33P");

    trap1.attack("TR33P");
    trap1.takeDamage(4);
    trap1.beRepaired(3);
    trap2.attack("TR4P");
    trap2.guardGate();
    trap1.takeDamage(6);
    trap1.beRepaired(4);
    return (0);
}