#include "PhoneBook.hpp"
#include <iomanip>
PhoneBook::PhoneBook()
{
    this->index = 0;
}
PhoneBook::~PhoneBook()
{

}

std::string formatString(std::string str)
{
    if(str.length() > 9)
    {
        return (str.substr(0,9) + ".");
    }
    else
        return (str);
}
std::string promptField(std::string fieldName)
{
    std::string input;

    while (true)
    {
        std::cout << " │ Enter " << fieldName << ": ";
        if (!std::getline(std::cin, input))
        {
            std::cout << std::endl;
            return ("");
        }

        if (!input.empty())
        {
            break;
        }
        std::cout << " │ ❌ Error: Field cannot be empty! Please try again." << std::endl;
    }
    return (input);
}

void PhoneBook::addContact()
{
    std::string first, last, nick, phone, secret;

    std::cout << "┌──────────────────────────────────────────┐" << std::endl;
    std::cout << "│        ADD NEW CONTACT TO PHONEBOOK      │" << std::endl;
    std::cout << "└──────────────────────────────────────────┘" << std::endl;


    first  = promptField("First Name");
    if (first.empty()) return;
    
    last   = promptField("Last Name");
    if (last.empty()) return;
    
    nick   = promptField("Nickname");
    if (nick.empty()) return;
    
    phone  = promptField("Phone Number");
    if (phone.empty()) return;
    
    secret = promptField("Darkest Secret");
    if (secret.empty()) return;

    int targetPos = this->index % 8;


    this->contacts[targetPos].saveFirstName(first);
    this->contacts[targetPos].saveLastName(last);
    this->contacts[targetPos].saveNickname(nick);
    this->contacts[targetPos].savePhone(phone);
    this->contacts[targetPos].saveSecret(secret);


    this->index++;

    std::cout << "────────────────────────────────────────────" << std::endl;
    std::cout << " 🎉 Contact successfully saved to index [" << targetPos << "]!" << std::endl;
    std::cout << "────────────────────────────────────────────" << std::endl;
}
void PhoneBook::ShowDetails(Contact contact)
{
    std::string op;
    std::cout << "┌──────────────────────────────────────────┐" << std::endl;
    std::cout << "│             CONTACT DETAILS              │" << std::endl;
    std::cout << "└──────────────────────────────────────────┘" << std::endl;
    
    // Usamos o operador << de forma limpa para exibir cada campo
    std::cout << " First Name     : " << contact.getFirstName() << std::endl;
    std::cout << " Last Name      : " << contact.getLastName() << std::endl;
    std::cout << " Nickname       : " << contact.getNickname() << std::endl;
    std::cout << " Phone Number   : " << contact.getPhone() << std::endl;
    std::cout << " Darkest Secret : " << contact.getSecret() << std::endl;
    std::cout << std::endl;
    while(true)
    {
        std::cout << "Press Enter to Go Back to the Menu..." << std::endl;
        std::getline(std::cin,op);
    if(op.empty())
        return;
    else
        std::cout << "Unknown Command" << std::endl;
    }
}
void PhoneBook::ListContacts()
{   
    int limit = (this->index > 8) ? 8 : this->index;
    int older = 0;
    std::string input_index;
    int detail_index;
    if(limit == 0)
    {
        std::cout << "PhoneBook is Empty :(" << std::endl;
        return;
    }
    if(this->index >= 8)
    {
        older = this->index % 8;
    }
    std::cout<< "┌───────────────────────────────────────────┐" << std::endl;
    std::cout << "│";
    std::cout <<std::setw(10) << std::right << "Index" << "│";
    std::cout <<std::setw(10) << std::right << "First Name" << "│"; 
    std::cout <<std::setw(10) << std::right << "Last Name" << "│"; 
    std::cout <<std::setw(10) << std::right << "Nickname" << "│" << std::endl;
    std::cout<< "└───────────────────────────────────────────┘" << std::endl;
    for(int count = 0; count < limit; count++)
    {
        int i = (older + count) % 8;
        std::cout << "|" << std::setw(10) << std::right << i << "|";
        std::cout <<  std::setw(10) << std::right << formatString(this->contacts[i].getFirstName())<< "|";
        std::cout <<  std::setw(10) << std::right << formatString(this->contacts[i].getLastName()) << "|";
        std::cout << std::setw(10) << std::right << formatString(this->contacts[i].getNickname()) << "|" << std::endl;
    }
while (true)
    {
        std::cout << "Enter Index for Details: ";
        
        if (!std::getline(std::cin, input_index))
        {
            std::cout << std::endl;
            return; 
        }

        if (input_index.length() == 1 && input_index[0] >= '0' && input_index[0] < '0' + limit)
        {
            detail_index = input_index[0] - '0';
            break;
        }

        std::cout << "❌ Error: Invalid index! Please enter a number between 0 and " << (limit - 1) << "." << std::endl;
    }
    this->ShowDetails(this->contacts[detail_index]);
    return;
}

