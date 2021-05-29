
#pragma once

#include <string>
#include <iostream>
#include "Zombie.hpp"

class ZombieEvent
{
    private:
        std::string type;
    public:
        ZombieEvent(void);

        void    setZombieType(const std::string &type);
        Zombie  *newZombie (const std::string &name) const;
        void    randomChump(void) const;
};