
#include <iostream>
#include <string>

int main(int ac, char **argv)
{
    int i = 0;
    if (ac >= 2)
    {
        while(argv[i])
        {
            std::cout << std::toupper(argv[1][i]) << std::endl;
            i++;
        }
    }
    else
     std::cout << "hello" << std::endl;
    return(0);
}