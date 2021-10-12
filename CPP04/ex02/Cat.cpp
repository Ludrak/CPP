
#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"), brain(new Brain())
{ std::cout << "Cat was created (brain: " << this->brain << ")" << std::endl; }

Cat::Cat(const Cat &c)
{
    this->type = c.getType();
    this->brain = new Brain(*c.brain);
    std::cout << "Cat was created by copy (brain: " << this->brain << ")" << std::endl;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat was destroyed" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat assignation operator called" << std::endl;
    if (&other == this)
        return (*this);
    this->type = other.getType();
    this->brain = new Brain(*other.brain);
    return (*this);
}


const std::string   Cat::getSound() const
{
    return ("Meooowww");
}

Brain               *Cat::getBrain()
{
    return (this->brain);
}