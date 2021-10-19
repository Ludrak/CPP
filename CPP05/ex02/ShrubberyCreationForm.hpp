
#pragma once

#include "Form.hpp"

class ShrubberyCreationForm : public virtual Form
{
    private:
        std::string _target;

        void        _on_execute() const;

    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string &target);
        ShrubberyCreationForm(const ShrubberyCreationForm &copy);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm   &operator=(const ShrubberyCreationForm &other);

        const std::string &getTarget() const;
};

