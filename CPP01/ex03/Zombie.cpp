
#include "Zombie.hpp"

Zombie::Zombie() : type(DEFAULT_TYPE), name(DEFAULT_NAME) { };
Zombie::Zombie(const std::string &type, const std::string &name) : type(type), name(name) { };

void        Zombie::advert(void)
{
    std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiinnnnsssss......." << std::endl;
}

void        Zombie::set_type(const std::string &type)
{
    this->type = type;
}

void        Zombie::set_name(const std::string &name)
{
    this->name = name;
}

std::string Zombie::get_type(void) const
{
    return (this->type);
}

std::string Zombie::get_name(void) const
{
    return (this->name);
}