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
        if(firstChar)
        {
            result += c;
        }
    }
    result += "\n";
    return result; 
}
//Grabs a line and parses all spaces in the front. Then starts to add the string when it detects the first non-space character.

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
//Counts the amount of a specified character in a line
