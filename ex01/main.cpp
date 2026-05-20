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
        if(!std::getline(std::cin,option))
            break;
        if(option == "ADD")
        {
            std::system("clear");
            phonebook.addContact();
        }
        if(option == "SEARCH")
        {
            std::system("clear");
            phonebook.ListContacts();
        }
    }
    return (0);
}
