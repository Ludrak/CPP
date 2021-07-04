
#include "Zombie.hpp"

int main()
{
    Zombie  *horde = zombieHorde(10, "Kevin");
 
    for (int i = 0; i < 10; i++)
        horde[i].announce();
    return (0);
}