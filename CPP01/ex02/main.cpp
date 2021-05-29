
#include "ZombieEvent.hpp"

int main()
{
    ZombieEvent event;

    event.setZombieType("Crawler");
    event.randomChump();
    event.randomChump();
    event.randomChump();
    event.randomChump();

    event.setZombieType("Deducer");
    event.randomChump();
    event.randomChump();
    event.randomChump();
    event.randomChump();

    event.setZombieType("Revoker");
    event.randomChump();
    event.randomChump();
    event.randomChump();
    event.randomChump();
    return (0);
}