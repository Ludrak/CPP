
#include <iostream>
#include <string>
#include "Data.hpp"

void print_data(const Data &d)
{
    std::cout << "Data:" << std::endl
            << "d1: " << d.d1 << std::endl
            << "d2: " << d.d2 << std::endl
            << "d3: " << d.d3 << std::endl << std::endl;

}


uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

int main ()
{
    Data d = {
        .d1 = 12,
        .d2 = 4.783f,
        .d3 = "some string"
    };
    Data first_d = d;

    print_data(d);

    std::cout << "serializing" << std::endl;
    uintptr_t ptr = serialize(&d);
    std::cout << std::endl << "ptr: " << ptr << std::endl;

    std::cout << "deserializing" << std::endl << std::endl;
    deserialize(ptr);

    print_data(d);

    std::cout << "d: " << &d << std::endl;
    std::cout << "first_d: " << &d << std::endl;
}