
#ifndef DATE_HPP
# define DATE_HPP

# include <string>
# include "Util.hpp"

class Date
{
    private:
        uint8_t     day;
        uint8_t     month;
        uint16_t    year;
    public:
        Date(void);
        Date(u_int8_t day, u_int8_t month, u_int16_t year);
        Date(std::string &str);
        
        uint16_t    get_day(void) const;
        uint16_t    get_month(void) const;
        uint16_t    get_year(void) const;

        void        set_day(const uint8_t &day);
        void        set_month(const uint8_t &month);
        void        set_year(const uint8_t &year);

        uint8_t     is_empty(void);

        std::string to_str(void);
        static Date from_str(std::string &str);
};

#endif