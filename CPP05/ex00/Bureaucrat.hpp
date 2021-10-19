
#pragma once

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
    private:
        std::string _name;
        int         _grade;
    
    public:
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char  *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char  *what() const throw();
        };

        Bureaucrat();
        Bureaucrat(const std::string &name, const int grade) throw(Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowException);
        Bureaucrat(const Bureaucrat &copy);
        ~Bureaucrat();

        Bureaucrat          &operator=(const Bureaucrat &copy);

        void                upGrade() throw(Bureaucrat::GradeTooHighException);
        void                downGrade() throw(Bureaucrat::GradeTooLowException);

        const std::string   &getName() const;
        int                 getGrade() const;
};

std::ostream  &operator<<(std::ostream &os, Bureaucrat &bureaucrat);
