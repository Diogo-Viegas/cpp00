#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    this->_index = 0;
    std::cout << "Welcome to my crappy awesome phonebook software!" << std::endl;
}
PhoneBook:: ~PhoneBook(void)
{
    std::cout << "Bye-Bye see you soon :(" << std::endl; 
}

void PhoneBook::add(void)
{
    std::string str;

    str = "";
    while(!std::cin.eof() && str == "")
    {
        std::cout << "Enter First Name:";
        if(std::getline(std::cin,str) && str != "")
        {
            this->_contacts[this->_index % 8].set_fname(str);
        }
    }
    str = "";
    while(!std::cin.eof() && str == "")
    {
        std::cout << "Enter Last Name:";
        if(std::getline(std::cin,str) && str != "")
        {
            this->_contacts[this->_index % 8].set_lname(str);
        }
    }
    str = "";
    while(!std::cin.eof() && str == "")
    {
        std::cout << "Enter Nickname:";
        if(std::getline(std::cin,str) && str != "")
        {
            this->_contacts[this->_index % 8].set_nickname(str);
        }
    }
    str = "";
    while(!std::cin.eof() && str == "")
    {
        std::cout << "Enter Phonenumber:";
        if(std::getline(std::cin, str) && str != "")
        {
            this->_contacts[this->_index % 8].set_phonenumber(str);
        }
    }
    str = "";
    while(!std::cin.eof() && str == "")
    {
        std::cout << "Enter the Dark Secret:";
        if(std::getline(std::cin, str) && str != "")
        {
            this->_contacts[this->_index % 8].set_secret(str);
        }
        std::cout << this->_contacts[this->_index % 8].get_fname() << "saved successfuly with index[" << this->_index % 8 + 1 << "/8]" << std::endl;
    }
    this->_index++;
}