
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

void    pattern_replace(std::string &str, const std::string &pattern, const std::string &replace)
{
    size_t pos = 0;

    if (pattern.empty())
        return ;
    do
    {
        pos = str.find(pattern, pos);
        if (pos != str.npos)
        {
            str.erase(pos, pattern.length());
            str.insert(pos, replace);
            pos += replace.length();
        }
    }
    while (pos != str.npos);
}

int main(int ac, char **av)
{
    std::string file_name, file_content;
    std::string pattern, replace;

    if (ac != 4)
    {
        std::cerr << "Wrong usage: use: ./replace <file> <pattern> <replace>" << std::endl;
        return (EXIT_FAILURE);
    }
    file_name = av[1];
    pattern = av[2];
    replace = av[3];
    std::ifstream  stream;
    std::ofstream  replace_stream;
    stream.open(file_name, std::ios::in);
    if (stream.is_open())
        replace_stream.open(file_name + ".replace", std::ios::out | std::ios::trunc);
    if (stream.is_open() && replace_stream.is_open())
    {
        std::ostringstream ss;
        ss << stream.rdbuf();
        stream.close();
        file_content = ss.str();
        pattern_replace(file_content, pattern, replace);
        replace_stream << file_content;
        replace_stream.close();
        std::cout << "File replaced successfull. (output in " << file_name + ".replace" << ")" << std::endl;
        return (EXIT_SUCCESS);
    }
    else if (stream.is_open())
        std::cerr << "Cannot open file: " << file_name << std::endl;
    else
        std::cerr << "Cannot create file: " << file_name + ".replace" << std::endl;
    return (EXIT_FAILURE);
}