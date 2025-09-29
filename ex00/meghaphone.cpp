
#include <iostream>
#include <string>
#include <cctype>

void to_upper(char *str)
{
    int i = 0;
    while (str[i])
    {
        std::cout << std::toupper(str[i]) << std::endl;
        i++;
    }
}
int main(int ac, char **argv)
{
    int i = 0;
    if (ac == 2)
        to_upper(argv[1]);
    else
     std::cout << "hello" << std::endl;
}