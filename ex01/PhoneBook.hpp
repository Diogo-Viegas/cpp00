#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "Contact.hpp"
#include <algorithm>
#include <string>
#include <cstdlib>
class PhoneBook
{
    private:
        Contact contacts[8];
        int index;
    public:
         PhoneBook();
        ~PhoneBook();
         void addContact();
         void ListContacts();
         int getIndex();
         void ShowDetails(Contact contact);
         

};
#endif
