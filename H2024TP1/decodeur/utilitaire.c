#include "utilitaire.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tostring(char str[], int num)
{
    int i, rem, len = 0, n;

    n = num;
    while (n != 0)
    {
        len++;
        n /= 10;
    }
    for (i = 0; i < len; i++)
    {
        rem = num % 10;
        num = num / 10;
        str[len - (i + 1)] = rem + '0';
    }
    str[len] = '\0';
}

void* afficher_heure(int secondesEntre) {

     int heures = secondesEntre / HEURE_SECONDE;

     int minutes = (secondesEntre % HEURE_SECONDE) / MINUTE_SECONDE;

     int secondes = (secondesEntre % HEURE_SECONDE) % MINUTE_SECONDE;

      printf("%02ih%02im%02is", heures, minutes, secondes);

}

int decimal_a_octale(int nbrBase10) {
    int nbr = nbrBase10;
    double keepNumber;
    char* returnNumber;
    while (nbr >= 1) {
        char nbrchar[1];
        char nbrBase8[255];
        tostring(nbrchar,nbr % 8);
        strcat(nbrBase8, nbrchar);
        nbr = nbr / 8;
    }
    return atoi(returnNumber);
}