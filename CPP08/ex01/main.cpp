#include "span.hpp"
#include <iostream>
#include <sys/time.h>

void makeSpan(const int N)
{
    span a = span(N);

    for (int i = 0; i < N; i++)
    {
        struct timeval t;
        gettimeofday(&t, NULL);
        std::srand(t.tv_usec);
        int n = std::rand() % 50;
        a.addNumber(n); // <- random between 0 - 50
        std::cout << "added number " << n << std::endl;
    }

    span s = span(a); // <- just to illustrate copy constructor

    std::cout << std::endl;
    std::cout << "shortest span: " << s.shortestSpan() << std::endl;
    std::cout << "longest span: " << s.longestSpan() << std::endl;    
}

int main()
{
    std::cout << "\033[1;37m###    NEW SPAN\033[0m" << std::endl;
    makeSpan(5);
    std::cout << std::endl << std::endl << "\033[1;37m###    NEW SPAN\033[0m" << std::endl;
    makeSpan(2);
    std::cout << std::endl << "\033[1;37m###    NEW SPAN\033[0m" << std::endl;
    makeSpan(1);
    std::cout << std::endl << "\033[1;37m###    NEW SPAN\033[0m";
    makeSpan(0);
}