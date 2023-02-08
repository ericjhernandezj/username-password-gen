#include <stdlib.h>

void clearTerminal(void)
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}