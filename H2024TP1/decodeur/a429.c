#include "a429.h"

#include <math.h>
#include <stdio.h>

void afficher_entete_decodeur()
{
    char* authors = AUTHOR_NAMES;
    char* session = SESSION;

    printf("/*****************************************************************************\n");
    printf("* DECODEUR ARING-429\n");
    printf("*\n");
    printf("Auteurs     :   %s\n",authors);
    printf("Session     :   $s\n",session);
    printf("*\n");
    printf("/*****************************************************************************\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("Mot ARINC-429   |   Est corrompu    |   Donnee\n");
    printf("----------------|-------------------|-----------------------------------------\n");
}

void afficher_entete_test(void)
{
    char* authors = AUTHOR_NAMES;
    char* session = SESSION;

    printf("/*****************************************************************************\n");
    printf("* DECODEUR ARING-429    ::  Mode Test\n");
    printf("*\n");
    printf("Auteurs     :   %s\n",authors);
    printf("Session     :   $s\n",session);
    printf("*\n");
    printf("/*****************************************************************************\n");
}