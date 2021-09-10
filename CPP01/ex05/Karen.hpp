#pragma once

#include <iostream>
#include <string>


#define DEBUG_LEVEL     0
#define INFO_LEVEL      1
#define WARNING_LEVEL   2
#define ERROR_LEVEL     3
#define NULL_LEVEL      4

typedef uint8_t Level;

Level   levelFromStr(const std::string &str);


const std::string LEVELS[4] = {
    "DEBUG",
    "INFO",
    "WARNING",
    "ERROR"
};


class Karen
{
    public:
        Karen( void );

        void    complain( std::string level );

    private:
        /* array to Karen's log functions */
        void (Karen::*_log_functions[4])();

        /* Karen log functions */
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );
};
