
#include "Date.hpp"

//##
//##    Constructors

Date::Date(void)
{
    Date(0, 0, 0);
}

Date::Date(uint8_t day, uint8_t month, uint16_t year)
{
    this->day = day;
    this->month = month;
    this->year = year;
}

Date::Date(std::string &str)
{
    Date    d = from_str(str);
    Date(d.day, d.month, d.year);
}


//##
//##    Serialization

std::string Date::to_str(void)
{
    return (std::to_string(this->day)
    + "/" + std::to_string(this->month)
    + "/" + std::to_string(this->year));
}

Date        Date::from_str(std::string &date_str)
{
    std::string format[3] = {};
    size_t      i = 0;

    std::string::iterator begin = date_str.begin();
    for (std::string::iterator it = date_str.begin() ; it != date_str.end() ; it++)
    {
        if (*it == '/')
        {
            format[i++].assign(begin, it);
            begin = it + 1;
        }
    }
    format[i++].assign(begin, date_str.end());
    return (Date(std::stoi(format[0]), std::stoi(format[1]), std::stoi(format[2])));
}

//##
//##    Getters & Setters

uint16_t    Date::get_day(void) const
{
    return (static_cast<uint16_t>(this->day));
}

uint16_t    Date::get_month(void) const
{
    return (static_cast<uint16_t>(this->month));
}

uint16_t   Date::get_year(void) const
{
    return (this->year);
}

void        Date::set_day(const uint8_t &day)
{
    this->day = day;
}

void        Date::set_month(const uint8_t &month)
{
    this->month = month;
}

void        Date::set_year(const uint8_t &year)
{
    this->year = year;
}
