
#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <sys/time.h>

int main()
{
    std::vector<int> vec;

    std::cout << std::endl << "\033[1;37m### INIT RANDOM VEC\033[0m" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        struct timeval t;
        gettimeofday(&t, NULL);
        std::srand(t.tv_usec);
        int n = std::rand() % 5;
        vec.push_back(n);
        std::cout << "set vec[" << i << "] = " << n << std::endl;
    }

    std::cout << std::endl << "\033[1;37m### FIND I IN VEC\033[0m" << std::endl;
    for (int i = 0; i < 6; i++)
    {
        size_t n = easyfind(vec, i);
        std::cout << "found " << n << " for searching " << i << " in vec" << std::endl;
        if (n == vec.size())
           // std::cout << "\033[0;31m└> no " << i << " found in vec\033[0m" << std::endl;
                       std::cout << "\033[0;31m      ^ no " << i << " found in vec\033[0m" << std::endl << std::endl;
    }
}