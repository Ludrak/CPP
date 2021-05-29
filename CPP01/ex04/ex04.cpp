
#include <string>
#include <iostream>

int main()
{
    std::string s = "HI THIS IS BRAIN";
    std::string *p = &s;
    std::string &r = s;

    std::cout << "str: " << s << std::endl;
    std::cout << "ptr: " << *p << std::endl;
    std::cout << "ref: " << r << std::endl;
}