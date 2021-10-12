
#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") 
{ std::cout << "Cat was created" << std::endl; }

Cat::Cat(const Cat &c)
{
    *this = c;
    std::cout << "Cat was created by copy" << std::endl;
}

Cat::~Cat()
{ std::cout << "Cat was destroyed" << std::endl; }

Cat                 &Cat::operator=(const Cat &other)
{
    (void)other;
    return (*this);
}

const std::string   Cat::getSound() const
{
    return ("Meooowww");
}
