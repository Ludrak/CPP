
#include "Dog.hpp"
#include "Cat.hpp"

#define ARRAY_SIZE 10

int main()
{
    {
        std::cout << std::endl << "\033[1;37mCREATING ANIMALS\033[0m" << std::endl;
        Cat cat = Cat();
        Dog dog = Dog();

        cat.getBrain()->addIdea("Destroying the world");
        dog.getBrain()->addIdea("Eat");
        cat.makeSound();
        dog.makeSound();
        std::cout << std::endl << "\033[1;37mCOPYING ANIMALS\033[0m" << std::endl;
        {
            Cat c = Cat(cat);
            c.makeSound();
            std::cout << "Cat idea 0: " << c.getBrain()->getIdea(0) << std::endl; 
        }
        std::cout << std::endl << "\033[1;37mDESTROYING ANIMALS\033[0m" << std::endl;
    }


    std::cout << std::endl << "\033[1;37mCREATING ANIMALS ARRAY\033[0m" << std::endl;
    Animal  *array[ARRAY_SIZE];

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (i < ARRAY_SIZE / 2)
            array[i] = new Cat();
        else
            array[i] = new Dog();
    }
    for (int i = 0; i < ARRAY_SIZE; i++)
        array[i]->makeSound();

    std::cout << std::endl << "\033[1;37mDESTROYING ANIMALS ARRAY\033[0m" << std::endl;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        delete array[i];
    }
    

    return (0);
}