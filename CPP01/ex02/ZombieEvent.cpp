
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) : type(DEFAULT_TYPE) { }

void    ZombieEvent::setZombieType(const std::string &type)
{
    this->type = type;
}

Zombie  *ZombieEvent::newZombie(const std::string &name) const
{
    Zombie  *zombie = new Zombie(this->type, name);
    return (zombie);
}

void    ZombieEvent::randomChump(void) const
{
    std::string names[15] = {
        "Henry",
        "Alexander",
        "Mason",
        "Michael",
        "Ethan",
        "Daniel",
        "Jacob",
        "Logan",
        "Jackson",
        "Levi",
        "Sebastian",
        "Mateo",
        "Jack",
        "Owen",
        "Theodore"
    };
    
    Zombie zombie = Zombie(this->type, names[rand() % 15]);
    zombie.advert();
}