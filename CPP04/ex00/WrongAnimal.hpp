
#pragma once

#include <string>
#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;

        const std::string   getSound() const;
    
    public:
        WrongAnimal();
        WrongAnimal(const std::string &type);
        WrongAnimal(const WrongAnimal &c);
        virtual ~WrongAnimal();

        WrongAnimal &operator=(const WrongAnimal &other);

        void        makeSound() const;

        std::string &getType( void ) const;
        void        setType( std::string const & type );
};