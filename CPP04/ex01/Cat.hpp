
#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public virtual Animal
{
    public:
        Cat();
        Cat(const Cat &c);
        ~Cat();

        Cat     &operator=(const Cat &other);
        
        Brain   *getBrain();

    private:
        Brain   *brain;

        const std::string   getSound() const;
};