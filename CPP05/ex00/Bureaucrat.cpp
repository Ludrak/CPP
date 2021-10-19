
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("unnamed"), _grade(150)
{}

Bureaucrat::Bureaucrat(const std::string &name, const int grade)
    throw(GradeTooHighException, GradeTooLowException)
    : _name(name), _grade(grade)
{
    if (grade <= 0)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
: _name(copy.getName()), _grade(copy.getGrade())
{}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat              &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (&other == this)
        return (*this);
    this->_name = other.getName();
    this->_grade = other.getGrade();
    return (*this);
}

const char              *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char              *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}


void                    Bureaucrat::upGrade() throw(GradeTooHighException)
{
    this->_grade--;
    if (this->_grade <= 0)
        throw GradeTooHighException();
}

void                    Bureaucrat::downGrade() throw(GradeTooLowException)
{
    this->_grade++;
    if (this->_grade > 150)
        throw GradeTooLowException();
}


const std::string       &Bureaucrat::getName() const
{
    return (this->_name);
}

int                     Bureaucrat::getGrade() const
{
    return (this->_grade);
}

std::ostream    &operator<<(std::ostream &os, Bureaucrat &bureaucrat)
{
    return (os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade());
}