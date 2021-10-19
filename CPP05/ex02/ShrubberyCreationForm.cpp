
#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <sstream>

ShrubberyCreationForm::ShrubberyCreationForm()
    : Form("ShrubberyCreationForm", 145, 137), _target("")
    { }

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : Form("ShrubberyCreationForm", 145, 137), _target(target)
    { }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
  this->Form::operator=(copy);
  this->_target = copy.getTarget();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this == &other)
      return (*this);
    this->Form::operator=(other);
    this->_target = other.getTarget();
      return (*this);
}


void        ShrubberyCreationForm::_on_execute() const
{
    std::stringstream    ss;
    std::ofstream        file(this->_target + "_shrubberry");
	if (!file.is_open()) {
		std::cout << "Can't create a shrubberry..." << std::endl;
		return;
	}
    ss << "\
          %%%,%%%%%%%\n\
        ,'%% \\-*%%%O%%%\n\
  ;%%O%%*%   _%%%%\"\n\
  ,%%%       \\(_.*%O%%.\n\
  % *%%, ,%O%%*(    '\n\
%^     ,*%%% )\\|,%%*%,_\n\
      *%    \\/ #).-\"*%%*\n\
          _.) ,/ *%,\n\
  _________/)#(_____________\n\
";
    file << ss.rdbuf();
    file.close();
	std::cout << "Created Shrubberry in " << this->_target + "_shrubberry !" << std::endl;
}

const std::string &ShrubberyCreationForm::getTarget() const
{
    return (this->_target);
}
