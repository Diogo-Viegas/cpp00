
#include "PhoneBook.hpp"
int main()
{
    PhoneBook pb1;
    std::string str;

    while(str != "Exit")
    {
        std::cout << "> PLEASE INSERT YOUR COMMAND";
        std::getline(std::cin,str);
        if(str == "ADD")
            pb1.add();
       // if(str == "SEARCH")
           // pb1.search();
        if(std::cin.eof())
        {
            std::cout << std::endl;
            return (0);
        }
    }


    return (0);
}