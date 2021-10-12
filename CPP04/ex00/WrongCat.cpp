
#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") 
{ std::cout << "WrongCat was created" << std::endl; }

WrongCat::WrongCat(const WrongCat &c)
{
    *this = c;
    std::cout << "WrongCat was created by copy" << std::endl;
}

WrongCat::~WrongCat()
{ std::cout << "WrongCat was destroyed" << std::endl; }

WrongCat    &WrongCat::operator=(const WrongCat &other)
{
    (void)other;
    return (*this);
}

const std::string WrongCat::getSound() const
{
    return ("Merrrwww");
}
