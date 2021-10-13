#pragma once

#include "AMateria.hpp"

class Ice : public virtual AMateria 
{
    public:
        Ice();
        Ice(const Ice &copy);
        ~Ice();

        Ice         &operator=(const Ice &other);

        AMateria*   clone() const;
        void        use(ICharacter& target);
};
