
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "Date.hpp"
#include "Util.hpp"
#include <iostream>
#include <iomanip>

enum        e_commands
{
    EXIT,
    SEARCH,
    ADD,
    NULL_CMD
};

e_commands  resolve_cmd(std::string cmd_str)
{
    if (!std::strcmp(cmd_str.c_str(), "EXIT"))
        return (EXIT);
    else if (!std::strcmp(cmd_str.c_str(), "SEARCH"))
        return (SEARCH);
    else if (!std::strcmp(cmd_str.c_str(), "ADD"))
        return (ADD);
    return (NULL_CMD);
}

void        add_command(PhoneBook &phone_book)
{
    Contact     contact = Contact();
    std::string buffer;

    if (phone_book.get_nb_contact() >= MAX_CONTACTS)
        { std::cout << "No space left on device" << std::endl; return; }
    std::cout << std::endl << "\033[1m* NEW CONTACT *\033[0m" << std::endl;
    std::cout << "first name:" ; std::getline(std::cin, buffer);
    if (buffer.empty())
        { std::cout << "You must specify a non empty first name." << std::endl; return ; }
    contact.set_first_name(buffer);
    std::cout << "last name:" ; std::getline(std::cin, buffer);
    if (buffer.empty())
        { std::cout << "You must specify a non empty last name." << std::endl; return ; }
    contact.set_last_name(buffer);
    std::cout << "nickname:" ; std::getline(std::cin, buffer);
    contact.set_nickname(buffer);
    if (buffer.empty())
        { std::cout << "You must specify a non empty nickname." << std::endl; return ; }
    std::cout << "login:" ; std::getline(std::cin, buffer);
    contact.set_login(buffer);
    std::cout << "phone number:" ; std::getline(std::cin, buffer);
    if (!buffer.empty() && ((buffer[0] != '+' || !is_number(buffer.substr(1))) && !is_number(buffer)))
        { std::cout << "Invalid phone number (use +<country_code><phone_number> or <phone_number>)" << std::endl; }
    contact.set_phone_number(buffer);
    std::cout << "postal address:" ; std::getline(std::cin, buffer);
    contact.set_postal_address(buffer);
    std::cout << "birthday date (JJ/MM/AAAA):" ; std::getline(std::cin, buffer);
    Date date_buf = Date::from_str(buffer);
    if (!buffer.empty() && date_buf.is_empty())
        { std::cout << "You must enter a valid date (format is JJ/MM/AAAA)." << std::endl; return ; }
    contact.set_birthday_date(date_buf);
    std::cout << "favorite meal:" ; std::getline(std::cin, buffer);
    contact.set_favorite_meal(buffer);
    std::cout << "underwear color:" ; std::getline(std::cin, buffer);
    contact.set_underwear_color(buffer);
    std::cout << "darkest secret:" ; std::getline(std::cin, buffer);
    contact.set_darkest_secret(buffer);
    phone_book.add_contact(contact);
}

void print_field(std::string field)
{
    if (field.length() > 9)
    {
        field.resize(9);
        std::cout.width(9);
        std::cout << std::right << field << ".|";
    }
    else
    {
        std::cout.width(10);
        std::cout << std::right << field << "|";
    }
}

void        search_command(const PhoneBook &phone_book)
{
    uint8_t index = 0;
    Contact *contacts = phone_book.get_contacts();

    std::cout   << "_____________________________________________" << std::endl
                << "|\033[1mindex     \033[0m|\033[1mfirst name\033[0m|\033[1mlast name \033[0m|\033[1mpseudo    \033[0m|" << std::endl;
    for (size_t i = 0; i < phone_book.get_nb_contact(); i++)
    {
        std::cout << "|";
        print_field(std::to_string(index++ + 1));
        print_field(contacts[i].get_first_name());
        print_field(contacts[i].get_last_name());
        print_field(contacts[i].get_nickname());
        std::cout << std::endl;
    }
    std::cout   << "¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯" << std::endl;
}

int         main(void)
{
    PhoneBook   phone_book  = PhoneBook();
    std::string command     = "";

    do
    {
        if (command.empty())
        {
            std::cout << PROMPT" ";
            continue;
        }
        switch (resolve_cmd(command))
        {
            case EXIT:
                return (0);
                break ;
            case SEARCH:
                search_command(phone_book);
                break;
            case ADD:
                add_command(phone_book);
                break;
            default:
                std::cout << "Unknown command: `" << command << "`" << std::endl;
                break ;
        };
        std::cout << PROMPT" ";
    } while (std::getline(std::cin, command));
    std::cout << std::endl;
    return (0);
}