
#pragma once

#include "Form.hpp"

class RobotomyRequestForm : public virtual Form
{
    private:
        void        _on_execute() const;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string &target);
        RobotomyRequestForm(const RobotomyRequestForm &copy);
        virtual ~RobotomyRequestForm();

        RobotomyRequestForm &operator=(const RobotomyRequestForm &other);

        Form                    *clone() const;
};
