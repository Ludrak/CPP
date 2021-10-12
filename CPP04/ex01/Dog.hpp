
#pragma once

#include "Animal.hpp"

class Dog : public virtual Animal
{
    public:
        Dog();
        Dog(const Dog &c);
        ~Dog();

        Dog     &operator=(const Dog &other);

        Brain   *getBrain();

    private:
        Brain   *brain;
        
        const std::string   getSound() const;
};
