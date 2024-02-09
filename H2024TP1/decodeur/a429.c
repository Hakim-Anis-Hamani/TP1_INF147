#include "a429.h"
#include "utilitaire.h"
#include <math.h>
#include <stdio.h>
#include "icd.h"

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

void decoder_mot_a429(unsigned int mot_a429,int *est_corrompu,int *numero_mot,double *donnee_bnr,int *donnee_bcd1,int *donnee_bcd2,int *donnee_bcd3,int *donnee_bcd4)
{
//    unsigned int numero_mot_tmp     = decimal_a_octale(mot_a429 & 256);
//    *est_corrompu = (int) calculer_nb_bits_actifs(mot_a429);
//    unsigned int donnee_bnr_tmp     = (mot_a429 >> 8) & 2097152;
//    unsigned int ss_tmp             = (mot_a429 >> 28) & 3;
//
//    if(numero_mot_tmp == NUMERO_MOT_DEPART || numero_mot_tmp == NUMERO_MOT_DESTINATION || numero_mot_tmp == NUMERO_MOT_DATE)
//    {
//        *donnee_bcd1    = (int) (mot_a429 >> 8) & 32;
//        *donnee_bcd2    = (int) (mot_a429 >> 13) & 32;
//        *donnee_bcd3    = (int) (mot_a429 >> 18) & 32;
//        *donnee_bcd4    = (int) (mot_a429 >> 23) & 64;
//    }
//    else if(numero_mot_tmp == NUMERO_MOT_UTC || numero_mot_tmp == NUMERO_MOT_ALTITUDE || numero_mot_tmp == NUMERO_MOT_LATITUDE || numero_mot_tmp == NUMERO_MOT_LONGITUDE)
//    {
//
//    }

}