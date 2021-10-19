
#include "RobotomyRequestForm.hpp"
#include <fstream>
#include <sstream>
#include <ctime>
#include <cstdlib>
#include <sys/time.h>

RobotomyRequestForm::RobotomyRequestForm()
    : Form("RobotomyRequestForm", 72, 45), _target("")
    { }

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : Form("RobotomyRequestForm", 72, 45), _target(target)
    { }

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	this->Form::operator=(copy);
	this->_target = copy.getTarget();
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (this == &other)
		return (*this);
	this->Form::operator=(other);
	this->_target = other.getTarget();
    return (*this);
}
void        RobotomyRequestForm::_on_execute() const
{
	/* C like random (no std::chrono in C++98) */
	struct timeval t;
	gettimeofday(&t, NULL);
	std::srand(t.tv_usec);
	if (std::rand() % 2 == 0)
		std::cout << "DDJZJzdJJDJddzzz...  .." << this->_target << " has successfully been robotomized" << std::endl;
	else
		std::cout << this->_target << " was not robotomized" << std::endl;
}

const std::string &RobotomyRequestForm::getTarget() const
{
    return (this->_target);
}
