
#include "Array.hpp"
#include <iostream>

int main()
{
   // { std::cout << "empty constructor call" << std::endl; Array<int> arr = Array<int>(); }
   // { std::cout << "uint32_t constructor call" << std::endl; Array<int> arr = Array<int>(10); }
   // { std::cout << "copy constructor call" << std::endl; Array<int> arr = Array<int>(); Array<int> arr2 = Array<int>(arr); }
   // { std::cout << "new[] constructor call" << std::endl; Array<int> *arr = new Array<int>[10]; delete[] arr; }

    {
        Array<int> arr(10);

        std::cout << "created array of int of size: " << arr.size() << std::endl;
        try
        {
            
            arr[0] = 1;
            std::cout << "set arr[0]=" << arr[0] << std::endl;
            arr[8] = 2;
            std::cout << "set arr[11]" << arr[8] << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << "Error occured: " << e.what() << std::endl << std::endl;
        }
    }

/*
    {
        Array<std::string> *arr = new Array<std::string>[10];
        std::cout << "created array of std::string of size: " << arr->size() << std::endl;
        try
        {
            arr[0] = static_cast<Array<std::string> &>("hello world");
            std::cout << "set arr[0]" << std::endl;
            arr[11] = "hello";
            std::cout << "set arr[11]" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << "Error occured: " << e.what() << std::endl << std::endl;
        }
        delete[] arr;
    }*/
}