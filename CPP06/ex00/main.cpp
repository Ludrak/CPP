
#include <iostream>
#include <string>
#include <iomanip>
#include <float.h>
#include <cstdlib>

bool    is_numeric (const std::string &s)
{
    int n_points = 0;
    int n_f = 0;

    for (std::string::const_iterator it = s.begin(); it != s.end(); it++)
    {
        if (*it == '.')
            n_points++;
        else if (*it == 'f')
            n_f++;
    }
    if (n_f > 1 || (n_f == 1 && s.back() != 'f') || s.find_first_not_of("-0123456789.f") != std::string::npos)
        return (false);
    size_t sign = s.find_last_not_of("0123456789.f");
    if (sign == 0|| sign == std::string::npos)
        return (true);
    return (false);
}




bool   is_nan(const std::string &s)
{
    return ((s.compare("nan") == 0) || (s.compare("nanf") == 0));
}




int    is_inf(const std::string &s)
{
    if ((s.compare("inf") == 0 || s.compare("inff") == 0 || s.compare(1, s.length(), "inf") == 0|| s.compare(1, s.length(), "inff") == 0)
    && (s.length() != 5 || (s.front() == '-' || s.front() == '+')))
    {
        if (s.front() == '-')
            return (-1);
        return (1);
    }
    return (0);
}




void    write_as_char(const std::string &s)
{
    char    c;

    try
    {
        if (s.length() == 1 && !std::isdigit(s[0]))
            c = static_cast<char>(s.at(0));
        else
            c = static_cast<char>(std::stoi(s));
        if (!isprint(c))  {
            std::cout << "char: non displayable" << std::endl;
            return ;
        }
        std::cout << "char: '" << c << "'" << std::endl;
    }
    catch(std::exception e)
    {
        std::cout << "char: impossible" << std::endl;
    }
}




void    write_as_int(const std::string &s)
{
    try
    {
        int i;
        if (s.length() == 1 && !std::isdigit(s[0]))
            std::cout << "int: " << static_cast<int>(s[0]) << std::endl;
        else if (is_numeric(s))
        {
            i = std::stoi(s);
            std::cout << "int: " << i << std::endl;
        }
        else
            throw (std::exception());
    } catch (std::exception e)
    {
        std::cout << "int: impossible" << std::endl;
    }
}




void    write_as_float(const std::string &s)
{
    try
    {
        int inf;

        if (is_nan(s))
            std::cout << "float: nanf" << std::endl;
        else if ((inf = is_inf(s)))
            std::cout << "float: " << ((inf < 0) ? "-" : "+") << "inff" << std::endl;
        else if (s.length() == 1 && !std::isdigit(s[0]))
            std::cout << "float: " << static_cast<float>(s[0]) << "f" << std::endl;
        else if (is_numeric(s))
            std::cout << std::fixed << std::setprecision(1) << "float: " << std::stof(s) << "f" << std::endl;
        else
            throw (std::exception());
    }
    catch(std::exception e)
    {
        std::cout << "float: impossible" << std::endl;
    }
}




void    write_as_double(const std::string &s)
{
    try
    {
        int inf;

        if (is_nan(s))
            std::cout << "double: nan" << std::endl;
        else if ((inf = is_inf(s)))
            std::cout << "double: " << ((inf < 0) ? "-" : "+") << "inf" << std::endl;
        else if (s.length() == 1 && !std::isdigit(s[0]))
            std::cout << "double: " << static_cast<double>(s[0]) << std::endl;
        else if (is_numeric(s))
            std::cout << std::fixed << std::setprecision(1) << "double: " << std::stod(s) << std::endl;
        else throw std::exception();
    }
    catch(std::exception e)
    {
        std::cout << "double: impossible" << std::endl;
    }
}




int main(int ac, char **av)
{
    if (ac != 2)
        return 0;
    
    write_as_char(av[1]);
    write_as_int(av[1]);
    write_as_float(av[1]);
    write_as_double(av[1]);
}
