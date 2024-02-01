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
    printf("\nRecu      | Prevu\n"
               "------------------------\n");
    decimal_a_octale(1);
    printf("         | %s \n", "1");
    decimal_a_octale(8);
    printf("        | %s \n", "10");
    decimal_a_octale(15);
    printf("        | %s \n", "17");
    decimal_a_octale(64);
    printf("       | %s \n", "100");
    decimal_a_octale(104);
    printf("       | %s \n", "150");
    decimal_a_octale(209);
    printf("       | %s \n", "321");
    decimal_a_octale(96);
    printf("       | %s \n", "140");
    decimal_a_octale(2147483647); // limite du int par securité un big int serait optimal
    printf("       | %s \n", "17777777777");

}

void calculer_nb_bits_actifs_test()
{
    assert(calculer_nb_bits_actifs(0x00000000) == 0);
    assert(calculer_nb_bits_actifs(0x00000001) == 1);
    assert(calculer_nb_bits_actifs(0x80000000) == 1);
    assert(calculer_nb_bits_actifs(0x12345678) == 13);
    assert(calculer_nb_bits_actifs(0xFFFFFFFF) == 32);
}

int main(void)
{
    afficher_entete_test();
    afficher_heure_test();
    decimal_a_octale_test();
}

#endif