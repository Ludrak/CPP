
#pragma once

#include "Zombie.hpp"

class ZombieHorde
{
    private:
        Zombie              *zombies;
        size_t              horde_size;

    public:
        ZombieHorde(const size_t &n);
        ~ZombieHorde();

        void        advert(void) const;
};