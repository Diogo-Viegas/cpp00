#include <iostream>
#include <cctype>

void print_arguments(char *argument)
{
    int i= 0;
    while(*argument != '\0')
    {
        if(std::isalpha(argument[i]))
        {
            std::cout << (char)std::toupper(*argument) << std::endl;
        }  
        else
        {
            std::cout << *argument << std::endl;
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
    while(*argv != NULL)
    {
        print_arguments(*argv);
        argv++;
    }
    std::cout << std::endl;
}