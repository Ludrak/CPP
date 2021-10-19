
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main ()
{
    try
    {
        Bureaucrat ben = Bureaucrat("ben", 145);
        Bureaucrat bill = Bureaucrat("bill", 100);
        Bureaucrat bob = Bureaucrat("bob", 11);

        Form f1 = Form("Noobs Form", 100, 100);
        Form f2 = Form("Basic Form", 50, 50);
        Form f3 = Form("Aweseome Form", 10, 10);

        ben.signForm(f1); // Grade is too low

        bill.signForm(f1);
        bill.signForm(f2); // Grade is too low

        bob.signForm(f1);
        bob.signForm(f2);
        bob.signForm(f3); // Grade is too low
        bob.upGrade();
        bob.signForm(f3);
    }
    catch(const std::exception  &e)
    {
        std::cerr << e.what() << '\n';
    }

    return (0);
}