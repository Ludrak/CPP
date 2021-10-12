
#include "Dog.hpp"
#include "Cat.hpp"

#define ARRAY_SIZE 10

int main()
{
    Animal *cat = new Cat();
    cat->makeSound();
    delete cat;

    // Animal *unknown_animal = new Animal();
    // delete unknown_animal;

    return (0);
}