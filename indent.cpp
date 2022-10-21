#include <iostream>
#include <cctype>
#include <string.h>
#include "funcs.h"

int main()
{
    std::string input;
    std::string result;
    std::string indents = "";
    int indent = 0;
    char c;
    bool firstChar;
    while(std::getline(std::cin, input))
    {
        if(countChar(input, '}'))
        {
            indent--;
        }

        for(int i = 0; i < indent; i++)
        {
            indents += "\t";
        }
        
        result = indents + input + "\n"; 
        std::cout << result;
        indents = "";
        
        if(countChar(input, '{'))
        {
            indent++;
        } 
        

    }
    return 0;
}