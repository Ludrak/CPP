
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(const size_t &n) : horde_size(n)
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
    
    this->zombies = new Zombie[n];
    for (size_t i = 0; i < n; i++)
        this->zombies[i] = Zombie(DEFAULT_TYPE, names[rand() % 15]);
};

ZombieHorde::~ZombieHorde()
{
   delete[] zombies;
}

void    ZombieHorde::advert(void) const
{
    for (size_t i = 0; i < this->horde_size; i++)
        this->zombies[i].advert();
}
