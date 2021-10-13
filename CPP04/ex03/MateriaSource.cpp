#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
   std::cout << "MateriaSource constructor called" << std::endl;
   for (int i = 0; i < 4; i++)
      this->_learned_materia[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
   std::cout << "MateriaSource copy constructor called" << std::endl;
   *this = copy;
}

MateriaSource::~MateriaSource()
{
   std::cout << "MateriaSource destructor called" << std::endl;
   for (int i = 0; i < 4; i++)
      delete this->_learned_materia[i];
}

MateriaSource     &MateriaSource::operator=(const MateriaSource &other)
{
   if (this == &other)
      return (*this);
   for (int i = 0; i < 4; i++) {
      if (this->_learned_materia[i])
         delete this->_learned_materia[i];
      this->_learned_materia[i] = other._learned_materia[i]->clone();
   }
   return (*this);
}

void     MateriaSource::learnMateria(AMateria *materia)
{
   int i = 0;
   while (i < 4 && this->_learned_materia[i] != nullptr)
      i++;
   if (i < 4)
      this->_learned_materia[i] = materia;
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
   int i = 0;
   while (i < 4 && this->_learned_materia[i] != nullptr)
   {
      if (this->_learned_materia[i]->getType() == type)
         return (this->_learned_materia[i]->clone());
      i++;
   }
   return (nullptr);
}