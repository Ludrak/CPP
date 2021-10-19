
#include "Bureaucrat.hpp"

int main ()
{
    try
    {
        {
            std::cout << "Creating grade 1 bureaucrat" << std::endl;
            Bureaucrat b = Bureaucrat("bob", 1);
            std::cout << b << std::endl;
            //b.upGrade(); // grade too High exception
        }
        {
            //std::cout << std::endl << "Creating grade 151 bureaucrat" << std::endl;
            //Bureaucrat b = Bureaucrat("bill", 151); // grade too low exception
        }
        {
            //std::cout << std::endl <<  "Creating grade 0 bureaucrat" << std::endl;
            //Bureaucrat b = Bureaucrat("boul", 0); // grade too high exception
        }
    }
    catch(const std::exception  &e)
    {
        std::cerr << e.what() << '\n';
    }

    return (0);
}