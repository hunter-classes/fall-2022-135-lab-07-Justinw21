#include <iostream>
#include <cctype>
#include <string.h>
#include "funcs.h"

int main()
{
    std::string input;
    std::string result;
    while(std::getline(std::cin, input))
    {
        result = removeLeadingSpaces(input);
        std::cout << result;
    }
    return 0;
}