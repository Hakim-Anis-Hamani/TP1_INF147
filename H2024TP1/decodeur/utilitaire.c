#include "utilitaire.h"
#include <stdio.h>


void* afficher_heure(int secondesEntre) {

     int heures = secondesEntre / HEURE_SECONDE;

     int minutes = (secondesEntre % HEURE_SECONDE) / MINUTE_SECONDE;

     int secondes = (secondesEntre % HEURE_SECONDE) % MINUTE_SECONDE;

    //int liste[3] = {heures, minutes, secondes};
      printf("%02ih%02im%02is", heures, minutes, secondes);

}

void decimal_a_octale(int nbrBase10) {
    int nbr = nbrBase10;
    char nbrBase8[255];
    int i =0;
    while (nbr >= 1) {
        nbrBase8[i] = nbr % 8;
        nbr = nbr / 8;
        i++;
    }

    for (int index = 1; index < i+1; index++) {
            printf("%d", nbrBase8[i-index]);
    }
}

unsigned int calculer_nb_bits_actifs(unsigned int nbrAnalyse)
{
    int index;
    unsigned int masque = 1;
    unsigned int nbBits = 0;

    for(index = 0; index <= 32; index++)
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