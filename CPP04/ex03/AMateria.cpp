#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(const std::string &type) : _type(type)
{
   std::cout << "AMateria constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy) : _type(copy._type)
{
   std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria()
{
   std::cout << "AMateria destructor called" << std::endl;
}

AMateria            &AMateria::operator=(const AMateria &other)
{
   std::cout << "AMateria assignation operator called" << std::endl;  
   if (this == &other)
      return (*this);
   this->_type = other.getType();
   return (*this);
}


std::string const   &AMateria::getType() const
{
   return (this->_type);
}

void                AMateria::use(ICharacter& target)
{
   std::cout << "Used unkown Materia on " << target.getName() << std::endl;
}


    