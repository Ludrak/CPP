
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main ()
{
    try
    {
        Bureaucrat bob = Bureaucrat("bob", 26);
        Bureaucrat bill = Bureaucrat("bill", 73);
        Bureaucrat ben = Bureaucrat("ben", 146);

        PresidentialPardonForm  aw_form = PresidentialPardonForm("bob");
        RobotomyRequestForm     ro_form = RobotomyRequestForm("bill");
        ShrubberyCreationForm   sh_form = ShrubberyCreationForm("ben");

        std::cout << bob << std::endl;
        std::cout << bill << std::endl;
        std::cout << ben << std::endl << std::endl;

        std::cout << aw_form << std::endl << std::endl;
        std::cout << ro_form << std::endl << std::endl;
        std::cout << sh_form << std::endl << std::endl;

        bob.signForm(aw_form);
        bob.upGrade();
        bob.upGrade();
        bob.signForm(aw_form);

        std::cout << std::endl;
        bill.signForm(ro_form);
        bill.upGrade();
        bill.signForm(ro_form);

        std::cout << std::endl;
        ben.signForm(sh_form);
        ben.upGrade();
        ben.signForm(sh_form);

        std::cout << std::endl << aw_form << std::endl << std::endl;
        std::cout << ro_form << std::endl << std::endl;
        std::cout << sh_form << std::endl << std::endl;

        bob.executeForm(aw_form);
        bill.executeForm(ro_form);
        ben.executeForm(sh_form);

        for (int i = 0; i < 20; i++)
            bob.upGrade();
        for (int i = 0; i < 30; i++)
            bill.upGrade();
        for (int i = 0; i < 10; i++)
            ben.upGrade();

        bob.executeForm(aw_form);
        bill.executeForm(ro_form);
        ben.executeForm(sh_form);
    }
    catch(const std::exception  &e)
    {
        std::cerr << e.what() << '\n';
    }

    return (0);
}