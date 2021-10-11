
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap clap_trap = ClapTrap("TR4P");
    ScavTrap scav_trap = ScavTrap("TR33P");
    FragTrap frag_trap = FragTrap("FR4G");

    clap_trap.attack("TR33P");
    clap_trap.takeDamage(4);
    clap_trap.beRepaired(3);
    scav_trap.attack("TR4P");
    frag_trap.attack("TR4P");
    frag_trap.takeDamage(10);
    frag_trap.beRepaired(3);
    frag_trap.highFiveGuys();
    scav_trap.guardGate();
    clap_trap.takeDamage(6);
    clap_trap.beRepaired(4);
    return (0);
}