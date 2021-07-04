
#pragma once

#include <iostream>
#include <string>

# define DEFAULT_NAME   "joe"

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(const std::string &name);

        void        announce(void);

        void        set_name(const std::string &name);
        std::string get_name(void) const;
};

Zombie  *zombieHorde(int n, std::string name);