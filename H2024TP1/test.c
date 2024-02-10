#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "configuration.h"
#include "decodeur\a429.h"
#include "decodeur\utilitaire.h"

#if TEST
void afficher_heure_test() {
    printf("/*****************************************************************************\n");
    printf("*              TEST AFFICHER HEURE\n");
    printf("/*****************************************************************************\n");
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

    printf("\n");
}

void decimal_a_octale_test() {
    printf("/*****************************************************************************\n");
    printf("*              TEST DECIMALE OCTALE A429\n");
    printf("/*****************************************************************************\n");
    printf("\nRecu      | Prevu\n"
               "------------------------\n");
    printf("%i ", decimal_a_octale(1));
    printf("         | %s \n", "1");

    printf("%i ",decimal_a_octale(8));
    printf("        | %s \n", "10");

    printf("%i ",decimal_a_octale(15));
    printf("        | %s \n", "17");

    printf("%i ",decimal_a_octale(64));
    printf("       | %s \n", "100");

    printf("%i ",decimal_a_octale(104));
    printf("       | %s \n", "150");

    printf("%i ",decimal_a_octale(209));
    printf("       | %s \n", "321");

    printf("%i ",decimal_a_octale(96));
    printf("       | %s \n", "140");

    printf("\n");

}

void calculer_nb_bits_actifs_test()
{
    assert(calculer_nb_bits_actifs(0x00000000) == 0);
    assert(calculer_nb_bits_actifs(0x00000001) == 1);
    assert(calculer_nb_bits_actifs(0x80000000) == 1);
    assert(calculer_nb_bits_actifs(0x12345678) == 13);
    assert(calculer_nb_bits_actifs(0xFFFFFFFF) == 32);
}

void decoder_mot_a429_test() {
    printf("/*****************************************************************************\n");
    printf("*              TEST DECODER MOT A429\n");
    printf("/*****************************************************************************\n");
    int est_corrompu;
    int numero_mot;
    double donnee_bnr;
    int donnee_bcd1;
    int donnee_bcd2;
    int donnee_bcd3;
    int donnee_bcd4;
    printf("\nRecu                | Prevu\n"
              "-----------------------------------------------------------------------------");
    decoder_mot_a429(0x85D3029A,&est_corrompu,&numero_mot, &donnee_bnr,&donnee_bcd1,&donnee_bcd2,&donnee_bcd3,&donnee_bcd4);
    printf("        valeur = 0x85D3029A\n"
           "est_corrompu = %i    | est_corrompue = 0 \n"
           "numero_mot =  %i   | numero_mot = 232 \n"
           "donnee_bnr = %f      | donnee_bnr = ?/0 \n"
           "donnee_bcd1 = %i     | donnee_bcd1 = 2 \n"
           "donnee_bcd2 = %i    | donnee_bcd2 = 24 \n"
           "donnee_bcd3 = %i    | donnee_bcd3 = 20 \n"
           "donnee_bcd4 = %i    | donnee_bcd4 = 11 \n"
            "-----------------------------------------------------------------------------"
            ,est_corrompu, numero_mot,donnee_bnr,donnee_bcd1,donnee_bcd2,donnee_bcd3,donnee_bcd4);


    printf("\nRecu                | Prevu\n"
              "-----------------------------------------------------------------------------");
    decoder_mot_a429(0x003C90B0,&est_corrompu,&numero_mot, &donnee_bnr,&donnee_bcd1,&donnee_bcd2,&donnee_bcd3,&donnee_bcd4);
    printf("        valeur = 0x003C90B0\n"
           "est_corrompu = %i    | est_corrompue = 0 \n"
           "numero_mot =  %i   | numero_mot = 260 \n"
           "donnee_bnr = %f      | donnee_bnr = ?/0 \n"
           "donnee_bcd1 = %i     | donnee_bcd1 = 16 \n"
           "donnee_bcd2 = %i    | donnee_bcd2 = 4 \n"
           "donnee_bcd3 = %i    | donnee_bcd3 = 15 \n"
           "donnee_bcd4 = %i    | donnee_bcd4 = 0 \n"
            "-----------------------------------------------------------------------------"
            ,est_corrompu, numero_mot,donnee_bnr,donnee_bcd1,donnee_bcd2,donnee_bcd3,donnee_bcd4);

    printf("\nRecu                | Prevu\n"
              "-----------------------------------------------------------------------------");
    decoder_mot_a429(0x812EAF68,&est_corrompu,&numero_mot, &donnee_bnr,&donnee_bcd1,&donnee_bcd2,&donnee_bcd3,&donnee_bcd4);
    printf("        valeur = 0x812EAF68\n"
           "est_corrompu = %i    | est_corrompue = 0 \n"
           "numero_mot =  %i   | numero_mot = 150 \n"
           "donnee_bnr = %f      | donnee_bnr = 77487.000000 \n"
           "donnee_bcd1 = %i     | donnee_bcd1 = ?/0 \n"
           "donnee_bcd2 = %i    | donnee_bcd2 = ?/0 \n"
           "donnee_bcd3 = %i    | donnee_bcd3 = ?/0 \n"
           "donnee_bcd4 = %i    | donnee_bcd4 = ?/0 \n"
            "-----------------------------------------------------------------------------"
            ,est_corrompu, numero_mot,donnee_bnr,donnee_bcd1,donnee_bcd2,donnee_bcd3,donnee_bcd4);

    printf("\nRecu                | Prevu\n"
              "-----------------------------------------------------------------------------");
    decoder_mot_a429(0x83D2E3C8,&est_corrompu,&numero_mot, &donnee_bnr,&donnee_bcd1,&donnee_bcd2,&donnee_bcd3,&donnee_bcd4);
    printf("        valeur = 0x83D2E3C8\n"
           "est_corrompu = %i    | est_corrompue = 0 \n"
           "numero_mot =  %i   | numero_mot = 310 \n"
           "donnee_bnr = %f      | donnee_bnr = 43.102340 \n"
           "donnee_bcd1 = %i     | donnee_bcd1 = ?/0 \n"
           "donnee_bcd2 = %i    | donnee_bcd2 = ?/0 \n"
           "donnee_bcd3 = %i    | donnee_bcd3 = ?/0 \n"
           "donnee_bcd4 = %i    | donnee_bcd4 = ?/0 \n"
            "-----------------------------------------------------------------------------"
            ,est_corrompu, numero_mot,donnee_bnr,donnee_bcd1,donnee_bcd2,donnee_bcd3,donnee_bcd4);

    printf("\nRecu                | Prevu\n"
              "-----------------------------------------------------------------------------");
    decoder_mot_a429(0x00261AAA,&est_corrompu,&numero_mot, &donnee_bnr,&donnee_bcd1,&donnee_bcd2,&donnee_bcd3,&donnee_bcd4);
    printf("        valeur = 0x00261AAA\n"
           "est_corrompu = %i    | est_corrompue = 1 \n"
           "numero_mot   =  %i   | numero_mot   = 252 \n"
           "donnee_bnr   = %f    | donnee_bnr   = 9754.000000 \n"
           "donnee_bcd1  = %i    | donnee_bcd1  = ?/0 \n"
           "donnee_bcd2  = %i    | donnee_bcd2  = ?/0 \n"
           "donnee_bcd3  = %i    | donnee_bcd3  = ?/0 \n"
           "donnee_bcd4  = %i    | donnee_bcd4  = ?/0 \n"
            "-----------------------------------------------------------------------------"
            ,est_corrompu, numero_mot,donnee_bnr,donnee_bcd1,donnee_bcd2,donnee_bcd3,donnee_bcd4);
    printf("\n");
}
int main(void)
{
    afficher_entete_test();
    printf("\n\n");
    afficher_heure_test();
    decimal_a_octale_test();
    decoder_mot_a429_test();
}

#endif