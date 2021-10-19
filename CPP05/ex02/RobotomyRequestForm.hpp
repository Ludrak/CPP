
#pragma once

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    private:
        std::string _target;

        void        _on_execute() const;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string &target);
        RobotomyRequestForm(const RobotomyRequestForm &copy);
        ~RobotomyRequestForm();

        RobotomyRequestForm &operator=(const RobotomyRequestForm &other);

        const std::string &getTarget() const;
};
