
#include "Zombie.hpp"

Zombie::Zombie() : _name(DEFAULT_NAME) { };
Zombie::Zombie(const std::string &name) : _name(name) { };

void        Zombie::announce(void)
{
    std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

void        Zombie::set_name(const std::string &name)
{
    this->_name = name;
}

std::string Zombie::get_name(void) const
{
    return (this->_name);
}