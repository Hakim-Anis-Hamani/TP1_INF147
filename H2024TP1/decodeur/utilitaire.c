/****************************************************************************************
/*                                          A429.C                                      *
/****************************************************************************************
    Auteur : Jasmin Papierz-Lambert et Hakim-Anis Hamani
    Date   : 10 février 2024

    Ce module contient les fonctions utilitaires permettant la conversion et
    la récupération de certaines données dans le programme.

*****************************************************************************************/

#include "utilitaire.h"
#include <stdio.h>
#include <math.h>


/****************************************************************************************
*                           DÉFINTION DES FONCTIONS PUBLIQUES                           *
*****************************************************************************************/


void afficher_heure(int secondes_entre) {

    // Variable contenant le nombre d'heure;
    int heures = secondes_entre / HEURE_SECONDE;

    // Variable contenant le nombre de minutes;
    int minutes = (secondes_entre % HEURE_SECONDE) / MINUTE_SECONDE;

    // Variable contenant le nombre de secondes;
    int secondes = (secondes_entre % HEURE_SECONDE) % MINUTE_SECONDE;

    // Afficher l'heure
    printf("%02ih%02im%02is", heures, minutes, secondes);

}

int decimal_a_octale(int nombre_base_10) {

    // Nombre en base dix recu en parametre
    int nombre = nombre_base_10;

    //Liste de caractères permettant le stockage des chiffres sous base huit
    char nbrBase8[255];

    // Nombre de chiffre se trouvant dans la liste de chiffres de base huit sous forme LSD
    int nombre_chiffre_base_huit = 0;

    // Boucle qui convertie jusqu'a que la somme du nombre decimal est zéro
    while (nombre >= 1) {
        // Nombre restant de la division par 8
        nbrBase8[nombre_chiffre_base_huit] = nombre % 8;

        // Permet de definir la prochaine base de modulo pour la prochaine boucle
        nombre = nombre / 8;

        // Nombre de chiffre augmenter car un nouveau chiffre à était ajouter à la liste
        nombre_chiffre_base_huit++;
    }
    // Nombre en base huit renvoyé en paramettre après être inverser
    int nombre_base_huit_converti = 0;

    // Boucle permettant d'inverser la liste de base huit afin d'obtenir le nombre octale sous forme MSD
    for (int index = 0; index < nombre_chiffre_base_huit; index++) {

            // Permet de placer un chiffre à position en octal en multipliant par la puissance de sa position dans la liste
            nombre_base_huit_converti += pow(10,index)*nbrBase8[index];
    }

    // Retourne la valeur final convertie
    return nombre_base_huit_converti;
}

unsigned int calculer_nb_bits_actifs(unsigned int nbrAnalyse)
{
    int index;
    unsigned int masque = 1;
    unsigned int nbBits = 0;

    for(index = 0; index <= 31; index++)
    {
        unsigned int nbrAnalyseTemp = nbrAnalyse >> index;
        unsigned int verificationBit = nbrAnalyseTemp & masque;

        if(verificationBit == 1)
        {
            nbBits++;
        }
    }

    return nbBits;
}

void afficher_bits(unsigned int valeur, int bit_depart, int bit_fin)
{
    int masque = 1; // Permet de garder la valeur du bit selectionné.

    // Boucle for qui va passer à travers les bits demandes.
    for(int i = bit_fin; i >= bit_depart; i--)
    {
        unsigned int valeur_decale = valeur >> i; // Décalage de la valeur.
        unsigned int valeur_bit = valeur_decale & masque; // On extrait la valeur du bit.
        int verification = i % 4; // On vérifie si on a bien un groupe de 4 bits.
        printf("%i",valeur_bit); // On affiche la valeur du bit sélectionné.
        if(verification == 0) // Si on a un groupe de 4 bits, on sépare le prochain groupe avec un espace.
        {
            printf(" ");
        }
    }

}