#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "configuration.h"
#include "decodeur\a429.h"
#include "decodeur\utilitaire.h"

#if TEST
void afficher_heure_test() {
    printf("\nRecu         | Prevu\n"
           "------------------------\n");
    afficher_heure(1);
    printf("    | %s \n", "00h00m01s");

    afficher_heure(59);
    printf("    | %s \n", "00h00m59s");

    afficher_heure(61);
    printf("    | %s \n", "00h01m01s");

    afficher_heure(3661);
    printf("    | %s \n", "01h01m01s");

    afficher_heure(32949);
    printf("    | %s \n", "09h09m09s");

    afficher_heure(86399);
    printf("    | %s \n", "23h59m59s");
}

void decimal_a_octale_test() {
    //printf("%i", decimal_a_octale(8));
    /*assert(decimal_a_octale(8) == 10);
    assert(decimal_a_octale(15) == 17);
    assert(decimal_a_octale(64) == 100);
    assert(decimal_a_octale(104) == 150);
    assert(decimal_a_octale(209) == 321);*/

}

int main(void)
{
    afficher_entete_test();
    afficher_heure_test();
    decimal_a_octale_test();
}

#endif