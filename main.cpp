#include <iostream>
#include <cctype>
#include <string.h>
#include "funcs.h"

int main()
{
    std::cout << removeLeadingSpaces("   int i = 0;");
    std::cout << removeLeadingSpaces("                                  for(int i = 0; i < 10; i++");
    std::cout << countChar(" iiiii ", 'i') << "\n";
    std::cout << countChar("How many w's are there w w w w", 'w') << std::endl;
}