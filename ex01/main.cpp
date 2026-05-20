#include "Contact.hpp"
#include "PhoneBook.hpp"

void show_menu()
{
    std::cout << "┌──────────────────────────────────────────┐" << std::endl;
    std::cout << "│        WELCOME TO THE 80s PHONEBOOK      │" << std::endl;
    std::cout << "│       The Crappy Directory Software      │" << std::endl;
    std::cout << "└──────────────────────────────────────────┘" << std::endl;
    std::cout << "  Available commands (case-sensitive):" << std::endl;
    std::cout << "  • ADD    : Save a new contact" << std::endl;
    std::cout << "  • SEARCH : Display a specific contact" << std::endl;
    std::cout << "  • EXIT   : Quit the program (contacts lost)" << std::endl;
    std::cout << "────────────────────────────────────────────" << std::endl;
}
int main()
{
    PhoneBook phonebook;
    std::string option;

    while(option != "EXIT")
    {
        show_menu();
        std::getline(std::cin,option);
        if(option == "ADD")
            phonebook.addContact();
        if(option == "SEARCH")
            phonebook.ListContacts();
    }
    
}
