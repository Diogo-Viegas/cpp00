#include <iostream>
#include <cctype>

void print_argument(char *arg)
{
    while(*arg != '\0')
    {
        if(std::isalpha(*arg))
        {
            std::cout << (char)std::toupper(*arg);
        }
        else
        {
            std::cout << *arg;
        }
        arg++;
    }
}

int main(int argc, char **argv)
{
    char **args;

    args = ++argv;
    if(argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {    while(*args != NULL)
        {
            print_argument(*args);
            args++;
        }
            std::cout << std::endl;
    }
    return (0);
}
