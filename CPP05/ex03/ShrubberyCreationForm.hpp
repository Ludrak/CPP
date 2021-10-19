
#pragma once

#include "Form.hpp"

class ShrubberyCreationForm : public virtual Form
{
    private:
        void    _on_execute() const;

    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string &target);
        ShrubberyCreationForm(const ShrubberyCreationForm &copy);
        virtual ~ShrubberyCreationForm();

        ShrubberyCreationForm   &operator=(const ShrubberyCreationForm &other);

        Form                    *clone() const;
};

