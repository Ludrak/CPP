

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{ std::cout << "WrongAnimal of type " + this->type + " was created" << std::endl; }

WrongAnimal::WrongAnimal(const WrongAnimal &c) {
    *this = c;
    std::cout << "WrongAnimal of type " + this->type + " was created by copy" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string & type) : type(type)
{ std::cout << "WrongAnimal of type " + this->type + " was created" << std::endl; }

WrongAnimal::~WrongAnimal()
{ std::cout << "WrongAnimal of type " + this->type + " was destroyed" << std::endl; }

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this == &other)
        return (*this);
    this->type = other.getType();
    return (*this);
}

void        WrongAnimal::makeSound() const
{
    std::cout << "<WrongAnimal>[" << this->type << "] " << this->getSound() << std::endl;
}

const std::string WrongAnimal::getSound() const
{
    return ("* wrong animal sound *");
}

std::string &WrongAnimal::getType( void ) const
{
    return (const_cast<std::string &>(this->type));
}

void        WrongAnimal::setType( std::string const & type )
{
    this->type = type;
}
