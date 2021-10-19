
#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string _target;

        void        _on_execute() const;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm(const PresidentialPardonForm &copy);
        ~PresidentialPardonForm();

        PresidentialPardonForm  &operator=(const PresidentialPardonForm &other);

        const std::string &getTarget() const;
};
