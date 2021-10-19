#pragma once

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern 
{
    private:
        static const std::string _form_types[3];

        Form              *_forms[3];

        template<typename T>
        T           *_generateForm(const T &base, const std::string &target) const;

    public:
        Intern();
        Intern(const Intern &copy);
        ~Intern();

        Intern      &operator=(const Intern &other);

        Form        *makeForm(const std::string &type, const std::string &target);
};
