
#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"), brain(new Brain())
{ std::cout << "Dog was created (brain: " << this->brain << ")" << std::endl; }

Dog::Dog(const Dog &c)
{
    this->type = c.type;
    this->brain = new Brain(*c.brain);
    std::cout << "Dog was created by copy (brain: " << this->brain << ")" << std::endl;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog was destroyed" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (&other == this)
        return (*this);
    this->type = other.getType();
    this->brain = new Brain(*other.brain);
    return (*this);
}

const std::string   Dog::getSound() const
{
    return ("Waaaf Waf");
}

Brain               *Dog::getBrain()
{
    return (this->brain);
}