
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
    : nb_contacts(0)
    { }

uint8_t PhoneBook::add_contact(const Contact &contact)
{
  
    if (this->nb_contacts < MAX_CONTACTS)
        this->contacts[this->nb_contacts++] = contact;
    else
        this->contacts[MAX_CONTACTS - 1] = contact;
    std::cout << "added new contact " << contact.get_first_name() << " to phonebook" << std::endl << std::endl;
    return (EXIT_SUCCESS);
}

uint8_t PhoneBook::get_nb_contact(void) const
{
    return (this->nb_contacts);
}

Contact *PhoneBook::get_contacts(void) const
{
    return (const_cast<Contact *>(this->contacts));
}