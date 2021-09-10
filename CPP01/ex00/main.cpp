
#include "Zombie.hpp"

int main()
{
    randomChump("Michael");

    Zombie *z = newZombie("Bob");
    z->announce();
    delete z;
    return (0);
}