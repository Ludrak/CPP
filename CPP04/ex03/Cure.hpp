#pragma once

#include "AMateria.hpp"

class Cure : public virtual AMateria 
{
    public:
        Cure();
        Cure(const Cure &copy);
        ~Cure();

        AMateria*   clone() const;
        void        use(ICharacter& target);
};
