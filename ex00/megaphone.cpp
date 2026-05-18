#include <iostream>
#include <cctype>

void print_arguments(char *argument)
{
    while(*argument != '\0')
    {
        if(std::isalpha(*argument))
        {
            std::cout << (char)std::toupper(*argument);
        }  
        else
        {
            std::cout << *argument;
        }
        argument++;
    }

}

int main (int argc, char **argv)
{
    if(argc == 1)
    {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
    argv++;
    while(*argv != NULL)
    {
        print_arguments(*argv);
        argv++;
    }
    std::cout << std::endl;
}