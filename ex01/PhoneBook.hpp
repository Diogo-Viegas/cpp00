#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
class PhoneBook{
    private:
        Contact _contacts[8];
        int _index;
        int _size;
    public:
        PhoneBook();
        ~PhoneBook();

        void add();
        //void search();
};

#endif