
#pragma once

#include <string>
#include <iostream>

#define ANIMAL_DELFAULT "Animal"

class Animal
{
    protected:
        std::string type;

        virtual const std::string   getSound() const;
    
    public:
        Animal();
        Animal(const std::string &type);
        Animal(const Animal &c);
        virtual ~Animal();

        Animal      &operator=(const Animal &other);

        void        makeSound() const;

        std::string &getType( void ) const;
        void        setType( std::string const & type );
};