
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <sys/time.h>
#include <iostream>

Base * generate(void)
{
    /* C like random (no std::chrono in C++98) */
    struct timeval t;
    gettimeofday(&t, NULL);
    std::srand(t.tv_usec);
    switch (std::rand() % 3)
    {
        case 0:
            std::cout << "Randomly created new A !" << std::endl;
            return (new A());
        case 1:
            std::cout << "Randomly created new B !" << std::endl;
            return (new B());
        case 2:
            std::cout << "Randomly created new C !" << std::endl;
            return (new C());
    }
    return (NULL);
}

void identify(Base * p)
{
    if (dynamic_cast<A*>(p) != nullptr)
        std::cout << "[*]" << p << " is instance of A." << std::endl;
    if (dynamic_cast<B*>(p) != nullptr)
        std::cout << "[*]" << p << " is instance of B." << std::endl;
    if (dynamic_cast<C*>(p) != nullptr)
        std::cout << "[*]" << p << " is instance of C." << std::endl;
}

void identify(Base & p)
{
    if (dynamic_cast<A*>(&p) != nullptr)
        std::cout << "[&]" << &p << " is instance of A." << std::endl;
    if (dynamic_cast<B*>(&p) != nullptr)
        std::cout << "[&]" << &p << " is instance of B." << std::endl;
    if (dynamic_cast<C*>(&p) != nullptr)
        std::cout << "[&]" << &p << " is instance of C." << std::endl;
}

int main()
{
    int test = 5;
    for (int i = 0; i < test; i++)
    {
        Base *p = generate();
        identify(p);
        identify(*p);
        std::cout << std::endl;
        delete p;
    }
}