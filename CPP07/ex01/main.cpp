#include <iostream>
#include "iter.hpp"

void print_i(const int &i)
{
    std::cout << i << ", ";
}

void print_c(const char &c)
{
    std::cout << c << ", ";
}

void print_f(const float &f)
{
    std::cout << f << ", ";
}

template<typename T>
void print_t(const T &t)
{
    std::cout << t  << ", ";
}

int main()
{
    /** AS TYPE **/
    {
        int array[4] = {1, 2, 3, 4};
        std::cout << "array of int: ";
        iter(array, 4, print_i);
        std::cout << std::endl;
    }
    {
        char array[4] = {'a', 'b', 'C', 'D'};
        std::cout << "array of char: ";
        iter(array, 4, print_c);
        std::cout << std::endl;
    }
    {
        float array[4] = {1.01f, 2.012f, 3.0123f, 4.01234f};
        std::cout << "array of float: ";
        iter(array, 4, print_f);
        std::cout << std::endl;
    }

    /** AS TEMPLATE **/
    {
        int array[4] = {1, 2, 3, 4};
        std::cout << "array of int (as template): ";
        iter(array, 4, print_t);
        std::cout << std::endl;
    }
    {
        char array[4] = {'a', 'b', 'C', 'D'};
        std::cout << "array of char (as template): ";
        iter(array, 4, print_t);
        std::cout << std::endl;
    }
    {
        float array[4] = {1.01f, 2.012f, 3.0123f, 4.01234f};
        std::cout << "array of float (as template): ";
        iter(array, 4, print_t);
        std::cout << std::endl;
    }
}