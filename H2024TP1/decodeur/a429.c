/****************************************************************************************
/*                                          A429.C                                      *
/****************************************************************************************
    Auteur : Jasmin Papierz-Lambert et Hakim-Anis Hamani
    Date   : 11 février 2024

    Ce module contient les méthodes utilisé pour manipuler les données de vols recu par
    le protocole ARINC-429.

*****************************************************************************************/
#include "a429.h"
#include "utilitaire.h"
#include <stdio.h>

/****************************************************************************************
*                           DÉFINTION DES FONCTIONS PUBLIQUES                           *
*****************************************************************************************/

void afficher_entete_decodeur()
{
    // Affichage et formatage de l'entête avec les colonnes.
    printf("/*****************************************************************************\n");
    printf("* DECODEUR ARING-429\n");
    printf("*\n");
    printf("* Auteurs     :   %s\n",NOM_AUTEURS);
    printf("* Session     :   %s\n",SESSION);
    printf("*\n");
    printf("/*****************************************************************************\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("Mot ARINC-429   |   Est corrompu    |   Donnee\n");
    printf("----------------|-------------------|-----------------------------------------");

}

void afficher_mot_a429(unsigned int mot_a429)
{
    // Initialisation des paramètres qui seront envoyés a la fonction decoder_mot_a429().
    int est_corrompu;   // Valeur de vérification de la corruption.
    int numero_mot;     // Valeur du numéro de mot en format octal.
    double donnee_bnr;  // Valeur BNR utilisé lors du mot en format BNR.
    int donnee_bcd1;    // Valeurs BCD utilisées lors du mot en format BCD.
    int donnee_bcd2;
    int donnee_bcd3;
    int donnee_bcd4;

    // On décode le mot reçu et les résultats sont envoyés a l'adresse relié aux paramètres initiés plus haut.
    decoder_mot_a429(mot_a429,&est_corrompu,&numero_mot, &donnee_bnr,&donnee_bcd1,&donnee_bcd2,&donnee_bcd3,&donnee_bcd4);// Affiche le mot en format binaire, sur 32 bits.

    // Saut de ligne.
    printf("\n");

    // Les valeurs décodées BCD seront additionné de la valeur int du charactère A puis convertie en forme CHAR pour affichage.
    char lettre_donnee_1 = 'A' + donnee_bcd1;
    char lettre_donnee_2 = 'A' + donnee_bcd2;
    char lettre_donnee_3 = 'A' + donnee_bcd3;
    char lettre_donnee_4 = 'A' + donnee_bcd4;

    // On affiche la valeur de la première colonne, format hexadécimal.
    printf(" (0x% 8x) : ",mot_a429);

    // Si le mot est corrompu, on affiche oui dans la deuxième colonne. Sinon on affiche non.
    if(est_corrompu == 0)
    {
        printf("|               Non");
    }
    else if(est_corrompu == 1)
    {
        printf("|               Oui");
    }

    // Selon le numéro de mot reçu, on affiche le bon format des données dans la troisième colonne.
    switch(numero_mot)
    {
        case 150:
            printf(" |  Heure du vol            : ");
            afficher_heure(donnee_bnr);
            break;
        case 232:
            printf(" |  Depart de l'aeroport    : %c%c%c%c",lettre_donnee_1,lettre_donnee_2,lettre_donnee_3,lettre_donnee_4);
            break;
        case 252:
            printf(" |  Altitude                : %0.1lf",donnee_bnr);
            break;
        case 255:
            printf(" |  Arrive a l'aeroport     : %c%c%c%c",lettre_donnee_4,lettre_donnee_3,lettre_donnee_2,lettre_donnee_1);
            break;
        case 260:
            printf(" |  Date du vol             : %i/%i/%i",donnee_bcd3,donnee_bcd2,donnee_bcd1);
            break;
        case 310:
            printf(" |  Latitude                : %0.6lf",donnee_bnr);
            break;
        case 311:
            printf(" |  Longitude               : %0.6lf",donnee_bnr);
            break;
    }

}

void decoder_mot_a429(unsigned int mot_a429,int* est_corrompu,int* numero_mot,double* donnee_bnr,int* donnee_bcd1,int* donnee_bcd2,int* donnee_bcd3,int* donnee_bcd4)
{

    // Permet la conversion et le stockage en référence de mot du messages ;
    *numero_mot = decimal_a_octale(mot_a429 & 255 );

    // Permet d'obtenir et le stockage de l'état de corrumption 1 = Nombres de bit 1, si pair corrumption = 1 et si impair = 0
    *est_corrompu = calculer_nb_bits_actifs(mot_a429) % 2 == 0;

    // Si numéro équivaut au valeur de mots 232,255 ou 260 le decodage se fait en BCD
   if(*numero_mot == 232 || *numero_mot == 255 || *numero_mot == 260)
   {
       // Bit 8 à 12 du mot recue et ensuite convertie en decimale et ainsi stocker en référence
       *donnee_bcd1    = (int) (mot_a429 >> 8) & 31;

       // Bit 13 à 17 du mot recue et ensuite convertie en decimale et ainsi stocker en référence
       *donnee_bcd2    = (int) (mot_a429 >> 13) & 31;

       // Bit 18 à 22 du mot recue et ensuite convertie en decimale et ainsi stocker en référence
       *donnee_bcd3    = (int) (mot_a429 >> 18) & 31;
       // Bit 23 à 28 du mot recue et ensuite convertie en decimale et ainsi stocker en référence
       *donnee_bcd4    = (int) (mot_a429 >> 23) & 63;

       // Donnée bnr mis à zéra car non utiliser
       *donnee_bnr     = 0;
   }
    // Si numéro équivaut au valeur de mots 150,252,310 ou 311 le decodage se fait en BNR
    else if(*numero_mot == 150 || *numero_mot == 252 || *numero_mot == 310 || *numero_mot == 311)
   {
        // Permet d'aller chercher le 29 et 30 bit si 11 est negatif = 1 sinon 0
        int est_negatif = (int)(mot_a429 >> 29 & 3) == 3;

        // Permet la conversion et le stockage en référence de mot du messages sous encodage BNR
        *donnee_bnr = ((int) (mot_a429 >> 8 & 2097151));

        // Si négatif appliqué le symbole à la valeur
        if (est_negatif) {
            *donnee_bnr = *donnee_bnr *-1;
        }
        // Si numéro est 310 ou 311 multiplier par 0.00172
        if (*numero_mot == 310 || *numero_mot == 311 ) {
            *donnee_bnr = *donnee_bnr * 0.000172;
        }

        // Mise à zéro des valeur non utilisées.
        *donnee_bcd1    = 0;
        *donnee_bcd2    = 0;
        *donnee_bcd3    = 0;
        *donnee_bcd4    = 0;
   }

}