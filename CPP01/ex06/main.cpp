
#include "Karen.hpp"

void    complainUntilLevel(Karen &karen, Level l)
{
    Level i = 0;

    if (l >= 0 && l < 4)
    {
        while (i <= l)
            karen.complain(LEVELS[i++]);
    }
}

int main(int ac, char **av)
{
    Karen   k;
    Level   log_level;

    if (ac == 2 && (log_level = levelFromStr(av[1])) == NULL_LEVEL)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return (0);
    }
    complainUntilLevel(k, log_level);
    return (0);
}