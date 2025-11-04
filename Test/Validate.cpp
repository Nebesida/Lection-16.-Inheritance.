#include "Validate.h"

std::string validate::correctAlpha(std::string someStr)
{
    for (int i = 0; i < someStr.length(); ++i)
    {
        if (isalpha(someStr.at(i)) || ispunct(someStr.at(i))) 
            return someStr;
        else return "undefined";
    }
}

int validate::correctCount(int someCount)
{
    if (someCount >= 0) return someCount;
    else return 0;
}