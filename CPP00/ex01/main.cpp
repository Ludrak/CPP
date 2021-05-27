
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "Date.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>

enum        e_commands
{
    EXIT,
    SEARCH,
    ADD,
    NULL_CMD
};

e_commands  resolve_cmd(std::string cmd_str)
{
    if (!std::memcmp(cmd_str.c_str(), "EXIT", 4))
        return (EXIT);
    else if (!std::memcmp(cmd_str.c_str(), "SEARCH", 6))
        return (SEARCH);
    else if (!std::memcmp(cmd_str.c_str(), "ADD", 3))
        return (ADD);
    return (NULL_CMD);
}

void        add_command(PhoneBook &phone_book)
{
    Contact     contact = Contact();
    std::string buffer;
    std::cout << "first name:" ; std::cin >> buffer;
    contact.set_first_name(buffer);
    std::cout << "last name:" ; std::cin >> buffer;
    contact.set_last_name(buffer);
    std::cout << "nickname:" ; std::cin >> buffer;
    contact.set_nickname(buffer);
   /* std::cout << "login:" ; std::cin >> buffer;
    contact.set_login(buffer);
    std::cout << "phone number:" ; std::cin >> buffer;
    contact.set_phone_number(buffer);
    std::cout << "postal address:" ; std::cin >> buffer;
    contact.set_postal_address(buffer);
    std::cout << "birthday date (JJ/MM/AAAA):" ; std::cin >> buffer;
    contact.set_birthday_date(Date::from_str(buffer));
    std::cout << "favorite meal:" ; std::cin >> buffer;
    contact.set_favorite_meal(buffer);
    std::cout << "underwear color:" ; std::cin >> buffer;
    contact.set_underwear_color(buffer);
    std::cout << "darkest secret:" ; std::cin >> buffer;
    contact.set_darkest_secret(buffer);*/
    phone_book.add_contact(contact);
}

std::string print_field(std::string field)
{
    std::stringstream   ss;

    ss << std::left;
    if (field.length() > 9)
        ss << std::setw(9) << field << ".|";
    else
        ss << std::setw(10) << field << "|";
    return (ss.str());
}

void        search_command(const PhoneBook &phone_book)
{
    uint8_t index = 0;
    Contact *contacts = phone_book.get_contacts();

    std::cout   << "_____________________________________________" << std::endl
                << "|index     |first name|last name |pseudo    |" << std::endl;
    for (size_t i = 0; i < phone_book.get_nb_contact(); i++)
    {
        std::cout   << "|"
                    << print_field(std::to_string(index++))
                    << print_field(contacts[i].get_first_name())
                    << print_field(contacts[i].get_last_name())
                    << print_field(contacts[i].get_nickname())
                    << std::endl;
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
                std::cout << "Unknown command: " << command << std::endl;
                break ;
        };
        std::cout << PROMPT" ";
    } while (std::getline(std::cin, command));
    std::cout << std::endl;
    return (0);
}