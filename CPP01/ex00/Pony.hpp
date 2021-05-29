
#pragma once

#include <iostream>
#include <string>

class Pony
{
    public:
        Pony();
        ~Pony();
        
        void        announce(const std::string &message) const;
        static void ponyOnTheStack(void);
        static void ponyOnTheHeap(void);
};