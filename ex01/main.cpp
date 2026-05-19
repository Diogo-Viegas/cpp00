#include "Contact.cpp"
#include "PhoneBook.hpp"

int main()
{
    PhoneBook phonebook;
    std::string option;
    std::getline(std::cin,option);
    while(option != "EXIT")
    {
        if(option == "ADD")
        {
            phonebook.addContact();
        }
    }
    
}