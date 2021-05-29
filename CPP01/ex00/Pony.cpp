
#include "Pony.hpp"

Pony::Pony() { }

Pony::~Pony() { }

void        Pony::announce(const std::string &message) const
{
    std::cout << "Pony: " << message << std::endl;
}

void        Pony::ponyOnTheHeap(void)
{
    Pony    *pony = new Pony();

    pony->announce("On the heap !");
    delete pony;
}

void        Pony::ponyOnTheStack(void)
{
    Pony    pony = Pony();

    pony.announce("On the stack !");
}
