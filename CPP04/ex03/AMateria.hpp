#pragma once

#include <string>
#include <iostream>

class ICharacter;

class AMateria 
{
    protected:
        std::string   _type;

    protected:
        AMateria() : _type("") {};
        AMateria(std::string const & type);
        AMateria(const AMateria &copy);

    public:
        virtual ~AMateria();

        virtual AMateria    &operator=(const AMateria &other);

        std::string const   &getType() const;
        virtual AMateria*   clone() const = 0;
        virtual void        use(ICharacter& target);
};
