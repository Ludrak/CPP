
#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("unnamed_form"), _signed(false), _required_sign_grade(150), _required_exec_grade(150)
{}

Form::Form(const std::string &name, const int required_sign_grade, const int required_exec_grade)
    throw(GradeTooHighException, GradeTooLowException)
    : _name(name), _signed(false), _required_sign_grade(required_sign_grade), _required_exec_grade(required_exec_grade)
{
    if (this->_required_sign_grade > 150 || this->_required_exec_grade > 150)
        throw GradeTooLowException();
    else if (this->_required_sign_grade <= 0 || this->_required_exec_grade <= 0)
        throw GradeTooHighException();
}

Form::Form(const Form &other)
: _name(other.getName()), _signed(other.getSigned()), _required_sign_grade(other.getRequiredSignGrade()),  _required_exec_grade(other.getRequiredExecGrade())
{ }

Form::~Form() { }

Form                &Form::operator=(const Form &other)
{
    if (&other == this)
        return (*this);
    this->_name = other.getName();
    this->_signed = other.getSigned();
    this->_required_exec_grade = other.getRequiredExecGrade();
    this->_required_sign_grade = other.getRequiredSignGrade();
    return (*this);
}

std::ostream        &operator<<(std::ostream &os, Form &form)
{
    return (os << "* Form: " << form.getName() << std::endl << "| signed: " << form.getSigned() << std::endl << "| sign grade requirement: " << form.getRequiredSignGrade() << std::endl << "* exec grade requirement: " << form.getRequiredExecGrade());
}

void                Form::beSigned(const Bureaucrat &bureaucrat)
throw(GradeTooLowException)
{
    if (bureaucrat.getGrade() > this->_required_sign_grade)
        throw GradeTooLowException();
    this->_signed = true;
}

std::string const   &Form::getName() const
{
    return (this->_name);
}

bool                Form::getSigned() const
{
    return (this->_signed);
}

int                 Form::getRequiredSignGrade() const
{
    return (this->_required_sign_grade);
}

int                 Form::getRequiredExecGrade() const
{
    return (this->_required_exec_grade);
}

const char          *Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char          *Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}
