#pragma once

#include "AMateria.hpp"

class Ice : public virtual AMateria 
{
    public:
        Ice();
        Ice(const Ice &copy);
        ~Ice();

        AMateria*   clone() const;
        void        use(ICharacter& target);
};
