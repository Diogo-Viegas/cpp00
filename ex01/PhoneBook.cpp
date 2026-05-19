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

    this->index++;
    std::cout << "Contact Sucessfuly Added" << std::endl;
}
void PhoneBook::ListContacts()
{   
        int current_index = this->index % 8;
        std::cout << "===================="<< std::endl;
        std::cout << "  List of Contacts  "<< std::endl;
        std::cout << "===================="<< std::endl;
    for(int i = 0; i < this->index; i++)
    {
    
        std::cout << this->contacts[current_index].getFirstName()<< std::endl;
        std::cout << this->contacts[current_index].getLastName()<< std::endl;
        std::cout << this->contacts[current_index].getNickname()<< std::endl;
        std::cout << this->contacts[current_index].getPhone()<< std::endl;
        std::cout << this->contacts[current_index].getSecret()<< std::endl;

        }
}
