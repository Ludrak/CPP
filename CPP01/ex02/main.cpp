
#include <string>
#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    /* show address of str */
    std::cout << "str_addr: " << &string << std::endl;
    std::cout << "ptr_addr: " << stringPTR << std::endl;
    std::cout << "ref_addr: " << &stringREF << std::endl;

    /* show str */
    std::cout << "str:      \"" << string << "\"" << std::endl;
    std::cout << "ptr:      \"" << *stringPTR << "\"" << std::endl;
    std::cout << "ref:      \"" << stringREF << "\"" << std::endl;

    return (0);
}