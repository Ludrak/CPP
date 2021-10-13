#pragma once

#include "AMateria.hpp"

class Cure : public virtual AMateria 
{
    public:
        Cure();
        Cure(const Cure &copy);
        ~Cure();

        Cure        &operator=(const Cure &other);

        AMateria*   clone() const;
        void        use(ICharacter& target);
};
