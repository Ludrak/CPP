
#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public virtual Form
{
    private:
        void        _on_execute() const;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(const std::string &target);
        PresidentialPardonForm(const PresidentialPardonForm &copy);
        virtual ~PresidentialPardonForm();

        PresidentialPardonForm  &operator=(const PresidentialPardonForm &other);

        Form                    *clone() const;
};
