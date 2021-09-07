
#include "PhoneBook.hpp"
#include "Contact.hpp"
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
    if (buffer.empty())
        { std::cout << "You must specify a non empty nickname." << std::endl; return ; }
    contact.set_nickname(buffer);
    
    std::cout << "phone number:" ; std::getline(std::cin, buffer);
    if (!buffer.empty() && ((buffer[0] != '+' || !is_number(buffer.substr(1))) && !is_number(buffer)))
        { std::cout << "Invalid phone number (format is +<country_code><phone_number> or <phone_number>)" << std::endl; return ;}
    contact.set_phone_number(buffer);

    std::cout << "darkest secret:" ; std::getline(std::cin, buffer);
    contact.set_darkest_secret(buffer);
    phone_book.add_contact(contact);
}

size_t    format_field(std::string &field, const unsigned int maxlen)
{
    size_t  byte_size = 0;
    size_t  printable_chars = 0;

    while(byte_size < field.length() && printable_chars < maxlen)
    {
        if (field[byte_size] < 0) {
            byte_size++;
        }
        byte_size++;
        printable_chars++;
    }
    if (printable_chars >= maxlen && byte_size < field.length())
    {
        byte_size -= (field[byte_size - 1] < 0);
        field.resize(byte_size);
        field[byte_size - 1] = '.';
        return (byte_size);
    }
    field.resize(byte_size);
    return (maxlen - printable_chars + byte_size);
}

void print_field(std::string field)
{
    std::cout.width(format_field(field, 10));
    std::cout << std::right << field << "|";
}

void        search_command(const PhoneBook &phone_book)
{
    uint8_t index = 0;
    Contact *contacts = phone_book.get_contacts();

    std::cout   << "_____________________________________________" << std::endl
                << "|\033[1mindex     \033[0m|\033[1mfirst name\033[0m|\033[1mlast name \033[0m|\033[1mnickname  \033[0m|" << std::endl;
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