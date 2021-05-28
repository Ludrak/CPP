
#pragma once

#include <iostream>
#include <string>
#include "Date.hpp"

class Contact
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string login;
        std::string postal_address;
        std::string email_address;
        std::string phone_number;
        Date        birthday_date;
        std::string favorite_meal;
        std::string underwear_color;
        std::string darkest_secret;
    public:
        Contact();
        Contact(std::string first_name,
                std::string last_name,
                std::string nickname,
                std::string login,
                std::string postal_address,
                std::string email_address,
                std::string phone_number,
                Date        birthday_date,
                std::string favorite_meal,
                std::string underwear_color,
                std::string darkest_secret);

        void    set_first_name(const std::string &first_name);
        void    set_last_name(const std::string &last_name);
        void    set_nickname(const std::string &nickname);
        void    set_login(const std::string &login);
        void    set_postal_address(const std::string &pastal_address);
        void    set_phone_number(const std::string &phone_number);
        void    set_birthday_date(const Date &birthday_date);
        void    set_favorite_meal(const std::string &favorite_meal);
        void    set_underwear_color(const std::string &underwear_color);
        void    set_darkest_secret(const std::string &darkest_secret);

        std::string    get_first_name(void) const;
        std::string    get_last_name(void) const;
        std::string    get_nickname(void) const;
        std::string    get_login(void) const;
        std::string    get_postal_address(void) const;
        std::string    get_phone_number(void) const;
        Date           get_birthday_date(void) const;
        std::string    get_favorite_meal(void) const;
        std::string    get_underwear_color(void) const;
        std::string    get_darkest_secret(void) const;
};
