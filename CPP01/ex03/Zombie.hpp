
#pragma once

#include <iostream>
#include <string>

# define DEFAULT_TYPE   "unknown zombie"
# define DEFAULT_NAME   "joe"

class Zombie
{
    private:
        std::string type;
        std::string name;
    public:
        Zombie();
        Zombie(const std::string &type, const std::string &name);

        void    advert(void);

        void        set_type(const std::string &type);
        void        set_name(const std::string &name);
        std::string get_type(void) const;
        std::string get_name(void) const;
};