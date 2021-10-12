#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
   std::cout << "Cure constructor called" << std::endl;
}

Cure::Cure(const Cure &copy)
{
   std::cout << "Cure copy constructor called" << std::endl;
   this->_type = copy.getType();
}

Cure::~Cure()
{
   std::cout << "Cure destructor called" << std::endl;
}

AMateria*   Cure::clone() const
{
   return (new Cure(*this));
}

void        Cure::use(ICharacter& target)
{
   std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}



    