#include "a429.h"

#include <math.h>
#include <stdio.h>

void afficher_entete_decodeur()
{
    char* authors = AUTHOR_NAMES;

    printf("/*****************************************************************************\n");
    printf("* DECODEUR ARING-429\n");
    printf("*\n");
    printf("Auteurs  : %s\n",authors);
    printf("*\n");
    printf("/*****************************************************************************\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("Mot ARINC-429   |   Est corrompu    |   Donnee\n");
    printf("----------------|-------------------|-----------------------------------------\n");
}