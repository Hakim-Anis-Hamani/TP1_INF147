#include "a429.h"
#include "utilitaire.h"
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
    int est_corrompu;
    int numero_mot;
    double donnee_bnr;
    int donnee_bcd1;
    int donnee_bcd2;
    int donnee_bcd3;
    int donnee_bcd4;
    printf("\n (0x% 8x) : ",mot_a429); // Créé une nouvelle ligne avec la valeur en hexadécimale.
    afficher_bits(mot_a429,BITDEPART,BITFIN);
    decoder_mot_a429(mot_a429,&est_corrompu,&numero_mot, &donnee_bnr,&donnee_bcd1,&donnee_bcd2,&donnee_bcd3,&donnee_bcd4);// Affiche le mot en format binaire, sur 32 bits.
}

void decoder_mot_a429(unsigned int mot_a429,int* est_corrompu,int* numero_mot,double* donnee_bnr,int* donnee_bcd1,int* donnee_bcd2,int* donnee_bcd3,int* donnee_bcd4)
{
    printf("\n");
    *numero_mot = decimal_a_octale(mot_a429 & 255 );
   *est_corrompu = calculer_nb_bits_actifs(mot_a429) % 2 == 0;

   if(*numero_mot == 232 || *numero_mot == 255 || *numero_mot == 260)
   {
       *donnee_bcd1    = (int) (mot_a429 >> 8) & 31;
       *donnee_bcd2    = (int) (mot_a429 >> 13) & 31;
       *donnee_bcd3    = (int) (mot_a429 >> 18) & 31;
       *donnee_bcd4    = (int) (mot_a429 >> 23) & 63;
       *donnee_bnr     = 0;
   }
    else if(*numero_mot == 150 || *numero_mot == 252 || *numero_mot == 310 || *numero_mot == 311)
   {
        int estnegatif = (int)(mot_a429 >> 29 & 3)==3;
        *donnee_bnr = ((int) (mot_a429 >> 8 & 2097151));
        if (estnegatif) {
            *donnee_bnr = *donnee_bnr *-1;
        }
        if (*numero_mot == 310 || *numero_mot == 311 ) {
            *donnee_bnr = *donnee_bnr * 0.000172;
        }
        *donnee_bcd1    = 0;
        *donnee_bcd2    = 0;
        *donnee_bcd3    = 0;
        *donnee_bcd4    = 0;
   }

}