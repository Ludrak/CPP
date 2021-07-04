
#include <string>
#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "str: " << string << std::endl;
    std::cout << "ptr: " << *stringPTR << std::endl;
    std::cout << "ref: " << stringREF << std::endl;
}