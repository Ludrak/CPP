#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public virtual IMateriaSource
{
    private:
        AMateria    *_learned_materia[4];

    public:
        MateriaSource();
        MateriaSource(const MateriaSource &copy);
        ~MateriaSource();
        
        void        learnMateria(AMateria*);
        AMateria*   createMateria(std::string const & type);
};
