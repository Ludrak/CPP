#include "Character.hpp"

Character::Character(const std::string &name) : _name(name)
{
   std::cout << "Character constructor called" << std::endl;
   for (int i = 0; i < 4; i++)
      this->_inventory[i] = nullptr;
}

Character::Character(const Character &copy)
{
   std::cout << "Character copy constructor called" << std::endl;
   this->_name = copy.getName();
   for (int i = 0; i < 4; i++)
   {
      if (this->_inventory[i])
         delete this->_inventory[i];
      this->_inventory[i] = copy._inventory[i];
   }
}

Character::~Character()
{
   std::cout << "Character destructor called" << std::endl;
   for (int i = 0; i < 4; i++)
      delete _inventory[i];
}

Character           &Character::operator=(const Character &other)
{
   std::cout << "Character assignation operator called" << std::endl;  
   if (this == &other)
      return (*this);
   this->_name = other.getName();
   for (int i = 0; i < 4; i++)
   {
      if (this->_inventory[i])
         delete this->_inventory[i];
      this->_inventory[i] = other._inventory[i];
   }
   return (*this);
}

std::string const   &Character::getName() const
{
   return (this->_name);
}

void                Character::equip(AMateria* m)
{
   int i = 0;
   while (i < 4 && this->_inventory[i] != nullptr)
      i++;
   if (i < 4)
      this->_inventory[i] = m;   
}

void                Character::unequip(int idx)
{
   if (idx >= 0 && idx < 4)
      this->_inventory[idx] = nullptr;
}

void                Character::use(int idx, ICharacter& target)
{
   if (idx >= 0 && idx < 4)
      this->_inventory[idx]->use(target);
}


    