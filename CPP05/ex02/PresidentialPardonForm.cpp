
#include "PresidentialPardonForm.hpp"
#include <fstream>
#include <sstream>

PresidentialPardonForm::PresidentialPardonForm()
    : Form("PresidentialPardonForm", 25, 5), _target("")
    { }

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    : Form("PresidentialPardonForm", 25, 5), _target(target)
    { }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
    this->Form::operator=(copy);
    this->_target = copy.getTarget();
}

PresidentialPardonForm::~PresidentialPardonForm()
    { }

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this == &other)
		return (*this);
	this->Form::operator=(other);
	this->_target = other.getTarget();
    return (*this);
}

void        PresidentialPardonForm::_on_execute() const 
{
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

const std::string &PresidentialPardonForm::getTarget() const
{
    return (this->_target);
}

