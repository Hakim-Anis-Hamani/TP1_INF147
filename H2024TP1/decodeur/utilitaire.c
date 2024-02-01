#include "utilitaire.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void* afficher_heure(int secondesEntre) {

     int heures = secondesEntre / HEURE_SECONDE;

     int minutes = (secondesEntre % HEURE_SECONDE) / MINUTE_SECONDE;

     int secondes = (secondesEntre % HEURE_SECONDE) % MINUTE_SECONDE;

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