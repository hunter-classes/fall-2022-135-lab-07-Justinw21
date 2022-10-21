#include <iostream>
#include <cctype>
#include <string.h>

std::string removeLeadingSpaces(std::string line)
{
    std::string result;
    bool firstChar = false; 
    char c;
    int i = 0;
    for(int i = 0; i < line.length(); i++)
    {
        c = line[i];
        if(!isspace(c))
        {
            firstChar = true; 
        }
        if(firstChar == true)
        {
            result += c;
        }
    }
    result += "\n";
    return result; 
}

int countChar(std::string line, char c)
{
    int result = 0;
    for(int i = 0; i < line.length(); i++)
    {
        if(c == line[i])
        {
            result++;
        }
    }
    return result;
}