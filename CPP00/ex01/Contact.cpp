
#include "Contact.hpp"

Contact::Contact() { }

Contact::Contact(std::string first_name, std::string last_name, std::string nickname,
    std::string login, std::string postal_address, std::string email_address, std::string phone_number,
    Date birthday_date, std::string favorite_meal, std::string underwear_color, std::string darkest_secret)
    : first_name(first_name), last_name(last_name), nickname(nickname), login(login), postal_address(postal_address),
    email_address(email_address), phone_number(phone_number), birthday_date(birthday_date), favorite_meal(favorite_meal),
    underwear_color(underwear_color), darkest_secret(darkest_secret)
    { }

void    Contact::set_first_name(const std::string &first_name)
{
    this->first_name = first_name;
}

void    Contact::set_last_name(const std::string &last_name)
{
    this->last_name = last_name;
}

void    Contact::set_nickname(const std::string &nickname)
{
    this->nickname = nickname;
}

void    Contact::set_login(const std::string &login)
{
    this->login = login;
}

void    Contact::set_postal_address(const std::string &postal_address)
{
    this->postal_address = postal_address;
}

void    Contact::set_phone_number(const std::string &phone_number)
{
    this->phone_number = phone_number;
}

void    Contact::set_birthday_date(const Date &birthday_date)
{
    this->birthday_date = birthday_date;
}

void    Contact::set_favorite_meal(const std::string &favorite_meal)
{
    this->favorite_meal = favorite_meal;
}

void    Contact::set_underwear_color(const std::string &underwear_color)
{
    this->underwear_color = underwear_color;
}

void    Contact::set_darkest_secret(const std::string &darkest_secret)
{
    this->darkest_secret = darkest_secret;
}


std::string    Contact::get_first_name(void) const
{
    return (this->first_name);
}

std::string    Contact::get_last_name(void) const
{
    return (this->last_name);
}

std::string    Contact::get_nickname(void) const
{
    return (this->nickname);
}

std::string    Contact::get_login(void) const
{
    return (this->login);
}

std::string    Contact::get_postal_address(void) const
{
    return (this->postal_address);
}

std::string    Contact::get_phone_number(void) const
{
    return (this->phone_number);
}

Date           Contact::get_birthday_date(void) const
{
    return (this->birthday_date);
}

std::string    Contact::get_favorite_meal(void) const
{
    return (this->favorite_meal);
}

std::string    Contact::get_underwear_color(void) const
{
    return (this->underwear_color);
}

std::string    Contact::get_darkest_secret(void) const
{
    return (this->darkest_secret);
}
