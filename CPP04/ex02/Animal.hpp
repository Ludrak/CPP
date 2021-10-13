
#pragma once

#include <string>
#include <iostream>
#include "Brain.hpp"

#define ANIMAL_DELFAULT "Animal"

class Animal
{
    protected:
        std::string type;

        virtual const std::string   getSound() const = 0;
    
    protected:
        Animal();
        Animal(const std::string &type);
        Animal(const Animal &c);

    public:
        virtual ~Animal();

        virtual Animal  &operator=(const Animal &);

        void        makeSound() const;

        std::string &getType( void ) const;
        void        setType( std::string const & type );
};