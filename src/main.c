#include <stdio.h>
#include <stdlib.h>

#include "username_gen.h"
#include "password_gen.h"
#include "general_functions.h"

int main(void)
{
    char passOrUser;

    puts("Welcome to the Username and Password Generator written in C.");
    printf("Press ENTER to start: ");
    getchar();

    clearTerminal();

    printf("Enter (u) to use the Username Generator, enter (p) to use the Password Generator: ");
    scanf("%c", &passOrUser);

    if (passOrUser == 'u' || passOrUser == 'U')
    {
        clearTerminal();
        username_gen();
    } else if (passOrUser == 'p' || passOrUser == 'P')
    {
        clearTerminal();
        password_gen();
    } else
    {
        puts("Error!");
    }

    return 0;
}