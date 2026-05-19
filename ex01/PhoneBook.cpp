#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->index = 0;
}

void PhoneBook::addContact()
{
    std::string first,last,nick,phone,secret;
    int current_index = this->index % 8;
    std::cout << "Enter First Name: " << std::endl;
    std::getline(std::cin,first);
    std::cout << "Enter Last Name: " << std::endl;
    std::getline(std::cin,last);
    std::cout << "Enter Nickname" << std::endl;
    std::getline(std::cin,nick);
    std::cout << "Enter Darkest Secret" << std::endl;
    
    this->contacts[current_index].saveFirstName(first);
    this->contacts[current_index].saveLastName(last);
    this->contacts[current_index].saveNickname(nick);
    this->contacts[current_index].savePhone(phone);
    this->contacts[current_index].saveSecret(secret);

    std::cout << "Contact Sucessfuly Added" << std::endl;
}

