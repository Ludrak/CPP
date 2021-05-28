
#pragma once

#include "Contact.hpp"

#define PROMPT       "phonebook @"
#define MAX_CONTACTS 8

#define ERR_NO_SPACE_LEFT   1

class   PhoneBook
{
    private:
        uint8_t nb_contacts;
        Contact contacts[MAX_CONTACTS];

    public:
        PhoneBook(void);

        uint8_t add_contact(const Contact &new_contact);
        Contact *get_contacts(void) const;
        uint8_t get_nb_contact(void) const;
};
