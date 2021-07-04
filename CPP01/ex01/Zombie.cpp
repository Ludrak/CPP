
#include "Zombie.hpp"

Zombie::Zombie() : name(DEFAULT_NAME) { };
Zombie::Zombie(const std::string &name) : name(name) { };

void        Zombie::announce(void)
{
    std::cout << "<" << this->name << ">  BraiiiiiiinnnzzzZ..." << std::endl;
}


void        Zombie::set_name(const std::string &name)
{
    this->name = name;
}

std::string Zombie::get_name(void) const
{
    return (this->name);
}