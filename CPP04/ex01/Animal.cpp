

#include "Animal.hpp"

Animal::Animal() : type(ANIMAL_DELFAULT)
{ std::cout << "Animal of type " + this->type + " was created" << std::endl; }

Animal::Animal(const Animal &c) : type(c.type) {
    std::cout << "Animal of type " + this->type + " was created by copy" << std::endl;
}

Animal::Animal(const std::string & type) : type(type)
{ std::cout << "Animal of type " + this->type + " was created" << std::endl; }

Animal::~Animal()
{ std::cout << "Animal of type " + this->type + " was destroyed" << std::endl; }

Animal  &Animal::operator=(const Animal &other)
{
    std::cout << "Animal assignation operator called" << std::endl;
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);
}

void        Animal::makeSound() const
{
    if (this->type.compare(ANIMAL_DELFAULT) != 0)
        std::cout << "[" << this->type << "] " << this->getSound() << std::endl;
}

const std::string Animal::getSound() const
{
    return ("");
}

std::string &Animal::getType( void ) const
{
    return (const_cast<std::string &>(this->type));
}

void        Animal::setType( std::string const & type )
{
    this->type = type;
}
