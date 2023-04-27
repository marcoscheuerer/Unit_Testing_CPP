#include "LibraryCode.hpp"

// hello world -> HELLO WORLD
void toUpper(char *inputString)
{
    for (unsigned int i = 0; i < strlen(inputString); i++)
    {
        inputString[i] = toupper(inputString[i]);   // a -> A, b -> B
    }
    inputString[strlen(inputString)+1] = 0;
}
