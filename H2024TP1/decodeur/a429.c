#include "a429.h"
#include "utilitaire.h"
#include <math.h>
#include <stdio.h>

void afficher_entete_decodeur()
{
    char* auteurs = NOM_AUTEURS;
    char* session = SESSION;
    int secondes;
    printf("/*****************************************************************************\n");
    printf("* DECODEUR ARING-429\n");
    printf("*\n");
    printf("Auteurs     :   %s\n",auteurs);
    printf("Session     :   %s\n",session);
    printf("*\n");
    printf("/*****************************************************************************\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("Mot ARINC-429   |   Est corrompu    |   Donnee\n");
    printf("----------------|-------------------|-----------------------------------------\n");

//    printf("Veuiller indiquer le nombre de secondes pour calculer le temps : ");
//    scanf("%i", &secondes);
//    afficher_heure(secondes);
}

void afficher_entete_test(void)
{
    char* auteurs = NOM_AUTEURS;
    char* session = SESSION;

    printf("/*****************************************************************************\n");
    printf("* DECODEUR ARING-429    ::  Mode Test\n");
    printf("*\n");
    printf("Auteurs     :   %s\n",auteurs);
    printf("Session     :   %s\n",session);
    printf("*\n");
    printf("/*****************************************************************************\n");
}

void afficher_mot_a429(unsigned int mot_a429)
{
    printf("\n (0x% 8x) : ",mot_a429); // Créé une nouvelle ligne avec la valeur en hexadécimale.
    afficher_bits(mot_a429,BITDEPART,BITFIN); // Affiche le mot en format binaire, sur 32 bits.
}