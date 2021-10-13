
#pragma once

#include "Animal.hpp"

class Cat : public virtual Animal
{
    public:
        Cat();
        Cat(const Cat &c);
        ~Cat();

        Cat                 &operator=(const Cat &other);

    private:
        const std::string   getSound() const;
};