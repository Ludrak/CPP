
#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat &c);
        ~WrongCat();

        WrongCat    &operator=(const WrongCat &other);

    private:
        const std::string   getSound() const;
};