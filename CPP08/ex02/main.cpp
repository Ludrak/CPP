
#include "MutantStack.hpp"
#include <iostream>

int main ()
{
    MutantStack<int>    a = MutantStack<int>();
    MutantStack<int>    s(a); // <- copy constructor from std::stack
    size_t              n = 5;

    for (size_t i = 0; i < n; i++)
    {
        s.push(i);
        std::cout << "MutantStack[" << s.size() - 1 << "] = " << i << std::endl;
    }

    { 
        std::cout << std::endl << "\033[1;37m###    ITERATOR\033[0m" << std::endl;
        size_t i = 0;
        for (MutantStack<int>::iterator it = s.begin(); it != s.end(); it++)
        {
            std::cout << "Mutant stack at " << i++ << " is " << *it << std::endl;
        }
    }

    { 
        std::cout << std::endl << "\033[1;37m###    CONST ITERATOR\033[0m" << std::endl;
        size_t i = 0;
        for (MutantStack<int>::const_iterator it = s.cbegin(); it != s.cend(); it++)
        {
            std::cout << "Mutant stack at " << i++ << " is " << *it << std::endl;
        }
    }


    { 
        std::cout << std::endl << "\033[1;37m###    REVERSE ITERATOR\033[0m" << std::endl;
        size_t i = 0;
        for (MutantStack<int>::reverse_iterator it = s.rbegin(); it != s.rend(); it++)
        {
            std::cout << "Mutant stack at " << i++ << " is " << *it << std::endl;
        }
    }


    { 
        std::cout << std::endl << "\033[1;37m###    CONST REVERSE ITERATOR\033[0m" << std::endl;
        size_t i = 0;
        for (MutantStack<int>::const_reverse_iterator it = s.crbegin(); it != s.crend(); it++)
        {
            std::cout << "Mutant stack at " << i++ << " is " << *it << std::endl;
        }
    }
}