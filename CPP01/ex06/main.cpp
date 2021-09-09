
#include "Karen.hpp"

void    complainUntilLevel(Karen &karen, Level l)
{
    switch (l)
    {
        case DEBUG_LEVEL:
            karen.complain("DEBUG");
        case INFO_LEVEL:
            karen.complain("INFO");
        case WARNING_LEVEL:
            karen.complain("WARNING");
        case ERROR_LEVEL:
            karen.complain("ERROR");
    }
}

int main(int ac, char **av)
{
    Karen   k;
    Level   log_level;

    if (ac != 2 || (log_level = levelFromStr(av[1])) == NULL_LEVEL)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return (0);
    }
    complainUntilLevel(k, log_level);
    return (0);
}