#include "Intern.hpp"

const std::string Intern::_form_types[3] = {
   "presidential pardon",
   "robotomy request",
   "shrubberry creation"
};

Intern::Intern()
{
   _forms[0] = new PresidentialPardonForm();
   _forms[1] = new RobotomyRequestForm();
   _forms[2] = new ShrubberyCreationForm();
}

Intern::Intern(const Intern &copy)
{
   *this = copy;
}

Intern::~Intern()
{
   delete _forms[0];
   delete _forms[1];
   delete _forms[2];
}

Intern   &Intern::operator=(const Intern &other)
{
   if (this == &other)
      return (*this);
   /* Intern _forms cannot be modiffied, no need to copy them */
   /* instead, initialize them in stack so that an intern always */
   /* */
   if (_forms[0])
      delete _forms[0];
   _forms[0] = new PresidentialPardonForm();
   if (_forms[1])
      delete _forms[0];
   _forms[1] = new RobotomyRequestForm();
   if (_forms[2])
      delete _forms[0];
   _forms[2] = new ShrubberyCreationForm();
   return (*this);
}

Form     *Intern::makeForm(const std::string &name, const std::string &target)
{
   for (int i = 0; i < 3; i++)
   {
      if (name == this->_form_types[i])
      {
         this->_forms[i]->setTarget(target);
         return (this->_forms[i]->clone());
      }
   }
   return (NULL);
}

template< typename T >
T        *Intern::_generateForm(const T &base, const std::string &target) const
{
   if (dynamic_cast<const Form*>(&base) != NULL)
      return (new PresidentialPardonForm(target));
   return (NULL);
}




    