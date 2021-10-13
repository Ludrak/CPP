#include "Brain.hpp"

Brain::Brain()
{
   std::cout << "created Brain: " << this << std::endl;
   for  (int i = 0; i < 100; i++)
      this->ideas[i] = "";
}

Brain::Brain(const Brain &copy)
{
   std::cout << "Copyied brain in " << this << std::endl;
   *this = copy;
   //for  (int i = 0; i < 100; i++)
   //   this->ideas[i] = copy.getIdea(i);
}

Brain::~Brain()
{
   std::cout << "Destroyed brain " << this << std::endl;
}

Brain   &Brain::operator=(const Brain &other)
{
   std::cout << "Brain "<< this << " assignation operator called" << std::endl;
   if (this == &other)
      return (*this);
   for (int i = 0; i < 100; i++)
      this->ideas[i] = other.getIdea(i);
   return (*this);
}

void        Brain::addIdea(const std::string &idea)
{
   int i = 0;
   while (i < 100)
   {
      if (this->ideas[i].compare("") == 0)
      { 
         this->ideas[i] = idea;
         std::cout << "Added idea '" << idea << "' to brain " << this << std::endl;
         break ;
      }
   }
}

std::string &Brain::getIdea(const int index) const
{
   return (const_cast<std::string &>(this->ideas[index % 100]));
}


    