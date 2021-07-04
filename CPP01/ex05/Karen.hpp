
#pragma once

#include <iostream>
#include <string>

#define DEBUG_LEVEL     0
#define INFO_LEVEL      1
#define WARNING_LEVEL   2
#define ERROR_LEVEL     3
#define NULL_LEVEL      4

typedef uint8_t Level;


const std::string LEVELS[4] = {
    "DEBUG",
    "INFO",
    "WARNING",
    "ERROR"
};

Level   levelFromStr(const std::string &str);

class Karen
{
    public:
        Karen( void );

        void    complain( std::string level );

    private:
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );

        void (Karen::*_log_functions[4])();
};