
#pragma once

#include <exception>
#include <string>
#include <iostream>

class Bureaucrat;

class Form
{
    private:
        std::string _name;
        bool        _signed;
        int         _required_sign_grade;
        int         _required_exec_grade;

        virtual void        _on_execute() const;

    protected:
        std::string _target;

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

        Form();
        Form(const std::string &name, const int required_sign_grade, const int required_exec_grade) throw(Form::GradeTooHighException, Form::GradeTooLowException);
        Form(const Form &copy);
        virtual ~Form();

        Form                &operator=(const Form &other);

        void                beSigned(const Bureaucrat &bureaucrat) throw(Form::GradeTooLowException);
        void                execute(Bureaucrat const &executor) const throw(Form::GradeTooLowException);

        virtual Form        *clone() const = 0;

        std::string const   &getName() const;
        bool                getSigned() const;
        int                 getRequiredSignGrade() const;
        int                 getRequiredExecGrade() const;
        const std::string   &getTarget() const;
        void                setTarget(const std::string &target);
};

std::ostream  &operator<<(std::ostream &os, Form &form);