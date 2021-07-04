
#include "Zombie.hpp"

int main()
{
    randomChump("Michael");
    randomChump("Dan");
    randomChump("Ethan");
    randomChump("Jacob");

    Zombie *z = newZombie("Zag");
    z->announce();
    delete z;
    return (0);
}