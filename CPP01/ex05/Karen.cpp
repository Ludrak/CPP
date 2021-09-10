#include "Karen.hpp"

Level   levelFromStr(const std::string &str)
{
    return Level(std::find(LEVELS, LEVELS + 4, str) - LEVELS);
}

Karen::Karen( void )
{
    this->_log_functions[DEBUG_LEVEL] = &Karen::debug;
    this->_log_functions[INFO_LEVEL] = &Karen::info;
    this->_log_functions[WARNING_LEVEL] = &Karen::warning;
    this->_log_functions[ERROR_LEVEL] = &Karen::error;
}

void    Karen::complain( std::string level )
{
    Level   l = levelFromStr(level);
    if (l == NULL_LEVEL)
        return ;
    (this->*_log_functions[l])();
}

/** log functions **/

void    Karen::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl << std::endl;
}

void    Karen::info( void )
{
    std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void    Karen::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free." << std::endl << "I’ve been coming here for years and you just started working here last month." << std::endl << std::endl;
}

void    Karen::error( void )
{
    std::cout << "[ ERROR ]" << std::endl << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;
}
