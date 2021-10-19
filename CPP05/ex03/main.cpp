
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main ()
{
    Intern intern = Intern();
    Form *f = intern.makeForm("presidential pardon", "bob");
    Form *i = intern.makeForm("robotomy request", "bob");
    Form *j = intern.makeForm("shrubberry creation", "bob");

    Bureaucrat  bob = Bureaucrat("bob", 5);
    bob.signForm(*f);
    bob.executeForm(*f);

    bob.signForm(*i);
    bob.executeForm(*i);

    bob.signForm(*j);
    bob.executeForm(*j);

    delete f;
    delete i;
    delete j;
    return (0);
}