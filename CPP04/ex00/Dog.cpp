
#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{ std::cout << "Dog was created" << std::endl; }

Dog::Dog(const Dog &c)
{
    *this = c;
    std::cout << "Dog was created by copy" << std::endl;
}

Dog::~Dog()
{ std::cout << "Dog was destroyed" << std::endl; }

Dog              &Dog::operator=(const Dog &other)
{
    (void) other;
    return (*this);
}

const std::string Dog::getSound() const
{
    return ("Waaaf Waf");
}
