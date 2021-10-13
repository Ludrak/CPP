#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{
   std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &copy)
{
   std::cout << "Ice copy constructor called" << std::endl;
   this->_type = copy.getType();
}

Ice::~Ice()
{
   std::cout << "Ice destructor called" << std::endl;
}

Ice         &Ice::operator=(const Ice &other)
{
   std::cout << "Ice assignation operator called" << std::endl;
   if (this == &other)
      return (*this);
   this->_type = other.getType();
   return (*this);
}

AMateria*   Ice::clone() const
{
   return (new Ice(*this));
}


void        Ice::use(ICharacter& target)
{
   std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}




    