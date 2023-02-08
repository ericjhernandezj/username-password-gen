#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "general_functions.h"

char* pickRandomVerb();
char* pickRandomSubject();
char* pickRandomFunnyNumber();

void username_gen(void)
{
    puts("--- Username Generator ---");

    char separator = '-';

    printf("Separate words using \"-\" or \"_\"?: ");
    scanf(" %c", &separator);

    if (separator == '-')
    {
        separator = '-';
    } else if (separator == '_')
    {
        separator = '_';
    } else
    {
        puts("Error!");
    }
    
    clearTerminal();

    puts("Generating username...\n");

    char* finalVerb[100];
    char* finalSubject[100];
    char* finalFunnyNumber[100];

    finalVerb[100] = pickRandomVerb();
    sleep(1);
    finalSubject[100] = pickRandomSubject();
    sleep(1);
    finalFunnyNumber[100] = pickRandomFunnyNumber();

    printf("Username: %s%c%s%c%s\n", finalVerb[100], separator, finalSubject[100], separator, finalFunnyNumber[100]);
}

char* pickRandomVerb()
{
    char* verbs[4];
    verbs[0] = "cleaner";
    verbs[1] = "killer";
    verbs[2] = "eater";
    verbs[3] = "stealer";
    verbs[4] = "builder";

    char* random;
    srand(time(NULL));
    random = verbs[rand() % 5];

    return random;
}

char* pickRandomSubject()
{
    char* subjects[4];
    subjects[0] = "human";
    subjects[1] = "dog";
    subjects[2] = "donkey";
    subjects[3] = "kid";
    subjects[4] = "mother";

    char* random;
    srand(time(NULL));
    random = subjects[rand() % 5];

    return random;
}

char* pickRandomFunnyNumber()
{
    char* funnyNumbers[4];
    funnyNumbers[0] = "31416";
    funnyNumbers[1] = "27182";
    funnyNumbers[2] = "69";
    funnyNumbers[3] = "007";
    funnyNumbers[4] = "365";

    char* random;
    srand(time(NULL));
    random = funnyNumbers[rand() % 5];

    return random;
}