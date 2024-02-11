#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "configuration.h"
#include "decodeur\a429.h"
#include "decodeur\utilitaire.h"

#if TEST

void afficher_entete_test(void)
{
    char* auteurs = NOM_AUTEURS;
    char* session = SESSION;

    printf("/*****************************************************************************\n");
    printf("* DECODEUR ARING-429    ::  Mode Test\n");
    printf("*\n");
    printf("* Auteurs     :   %s\n",auteurs);
    printf("* Session     :   %s\n",session);
    printf("*\n");
    printf("/*****************************************************************************");
}

void afficher_heure_test()
{
    printf("*****************************************************************************\n");
    printf("*                           TEST AFFICHER HEURE                             *\n");
    printf("*****************************************************************************\n");
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

void decimal_a_octale_test()
{
    printf("/*****************************************************************************\n");
    printf("*                       TEST DECIMALE OCTALE A429                            *\n");
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

void afficher_bits_test()
{
    printf("/********************************************************************************************\n");
    printf("*                                       TEST AFFICHER BITS                                  *\n");
    printf("/********************************************************************************************\n");
    printf("\nRecu                                            | Prevu\n"
           "--------------------------------------------------------------------------------------------\n");
    afficher_bits(0x12345678,0,31);
    printf("        | %s \n", "0001 0010 0011 0100 0101 0110 0111 1000");

    afficher_bits(0x9ABCDEF0,0,31);
    printf("        | %s \n", "1001 1010 1011 1100 1101 1110 1111 0000");

    afficher_bits(0xA3CF8643,4,15);
    printf("                                 | %s \n", "1000 0110 0100");

    afficher_bits(0xA3CF8643,31,31);
    printf("                                               | %s \n", "1");

    afficher_bits(0xA3CF8643,0,0);
    printf("                                              | %s \n", "1");
}

void calculer_nb_bits_actifs_test()
{
    printf("*****************************************************************************\n");
    printf("*                       TEST CALCULER NB BITS ACTIFS                        *\n");
    printf("*****************************************************************************\n");
    printf("\nRecu      | Prevu\n"
           "------------------------\n");
    printf("%i ", calculer_nb_bits_actifs(0x00000000));
    printf("        | %s \n", "0");

    printf("%i ",calculer_nb_bits_actifs(0x00000001));
    printf("        | %s \n", "1");

    printf("%i ",calculer_nb_bits_actifs(0x80000000));
    printf("        | %s \n", "1");

    printf("%i ",calculer_nb_bits_actifs(0x12345678));
    printf("       | %s \n", "13");

    printf("%i ",calculer_nb_bits_actifs(0xFFFFFFFF));
    printf("       | %s \n", "32");
}

void decoder_mot_a429_test() {
    printf("******************************************************************************\n");
    printf("*                       TEST DECODER MOT A429                                *\n");
    printf("******************************************************************************\n");
    int est_corrompu;
    int numero_mot;
    double donnee_bnr;
    int donnee_bcd1;
    int donnee_bcd2;
    int donnee_bcd3;
    int donnee_bcd4;
    printf("\nRecu                | Prevu\n"
              "-----------------------------------------------------------------------------\n");
    decoder_mot_a429(0x85D3029A,&est_corrompu,&numero_mot, &donnee_bnr,&donnee_bcd1,&donnee_bcd2,&donnee_bcd3,&donnee_bcd4);
    printf("\n        valeur = 0x85D3029A\n"
           "est_corrompu = %i    | est_corrompue = 0 \n"
           "numero_mot =  %i   | numero_mot = 232 \n"
           "donnee_bnr = %f      | donnee_bnr = ?/0 \n"
           "donnee_bcd1 = %i     | donnee_bcd1 = 2 \n"
           "donnee_bcd2 = %i    | donnee_bcd2 = 24 \n"
           "donnee_bcd3 = %i    | donnee_bcd3 = 20 \n"
           "donnee_bcd4 = %i    | donnee_bcd4 = 11 \n"
            "-----------------------------------------------------------------------------\n"
            ,est_corrompu, numero_mot,donnee_bnr,donnee_bcd1,donnee_bcd2,donnee_bcd3,donnee_bcd4);


    printf("\nRecu                | Prevu\n"
              "-----------------------------------------------------------------------------");
    decoder_mot_a429(0x003C90B0,&est_corrompu,&numero_mot, &donnee_bnr,&donnee_bcd1,&donnee_bcd2,&donnee_bcd3,&donnee_bcd4);
    printf("\n        valeur = 0x003C90B0\n"
           "est_corrompu = %i    | est_corrompue = 0 \n"
           "numero_mot =  %i   | numero_mot = 260 \n"
           "donnee_bnr = %f      | donnee_bnr = ?/0 \n"
           "donnee_bcd1 = %i     | donnee_bcd1 = 16 \n"
           "donnee_bcd2 = %i    | donnee_bcd2 = 4 \n"
           "donnee_bcd3 = %i    | donnee_bcd3 = 15 \n"
           "donnee_bcd4 = %i    | donnee_bcd4 = 0 \n"
            "-----------------------------------------------------------------------------\n"
            ,est_corrompu, numero_mot,donnee_bnr,donnee_bcd1,donnee_bcd2,donnee_bcd3,donnee_bcd4);

    printf("\nRecu                | Prevu\n"
              "-----------------------------------------------------------------------------");
    decoder_mot_a429(0x812EAF68,&est_corrompu,&numero_mot, &donnee_bnr,&donnee_bcd1,&donnee_bcd2,&donnee_bcd3,&donnee_bcd4);
    printf("\n        valeur = 0x812EAF68\n"
           "est_corrompu = %i    | est_corrompue = 0 \n"
           "numero_mot =  %i   | numero_mot = 150 \n"
           "donnee_bnr = %f      | donnee_bnr = 77487.000000 \n"
           "donnee_bcd1 = %i     | donnee_bcd1 = ?/0 \n"
           "donnee_bcd2 = %i    | donnee_bcd2 = ?/0 \n"
           "donnee_bcd3 = %i    | donnee_bcd3 = ?/0 \n"
           "donnee_bcd4 = %i    | donnee_bcd4 = ?/0 \n"
            "-----------------------------------------------------------------------------\n"
            ,est_corrompu, numero_mot,donnee_bnr,donnee_bcd1,donnee_bcd2,donnee_bcd3,donnee_bcd4);

    printf("\nRecu                | Prevu\n"
              "-----------------------------------------------------------------------------");
    decoder_mot_a429(0x83D2E3C8,&est_corrompu,&numero_mot, &donnee_bnr,&donnee_bcd1,&donnee_bcd2,&donnee_bcd3,&donnee_bcd4);
    printf("\n        valeur = 0x83D2E3C8\n"
           "est_corrompu = %i    | est_corrompue = 0 \n"
           "numero_mot =  %i   | numero_mot = 310 \n"
           "donnee_bnr = %f      | donnee_bnr = 43.102340 \n"
           "donnee_bcd1 = %i     | donnee_bcd1 = ?/0 \n"
           "donnee_bcd2 = %i    | donnee_bcd2 = ?/0 \n"
           "donnee_bcd3 = %i    | donnee_bcd3 = ?/0 \n"
           "donnee_bcd4 = %i    | donnee_bcd4 = ?/0 \n"
            "-----------------------------------------------------------------------------\n"
            ,est_corrompu, numero_mot,donnee_bnr,donnee_bcd1,donnee_bcd2,donnee_bcd3,donnee_bcd4);

    printf("\nRecu                | Prevu\n"
              "-----------------------------------------------------------------------------");
    decoder_mot_a429(0x00261AAA,&est_corrompu,&numero_mot, &donnee_bnr,&donnee_bcd1,&donnee_bcd2,&donnee_bcd3,&donnee_bcd4);
    printf("\n        valeur = 0x00261AAA\n"
           "est_corrompu = %i    | est_corrompue = 1 \n"
           "numero_mot   =  %i   | numero_mot   = 252 \n"
           "donnee_bnr   = %f    | donnee_bnr   = 9754.000000 \n"
           "donnee_bcd1  = %i    | donnee_bcd1  = ?/0 \n"
           "donnee_bcd2  = %i    | donnee_bcd2  = ?/0 \n"
           "donnee_bcd3  = %i    | donnee_bcd3  = ?/0 \n"
           "donnee_bcd4  = %i    | donnee_bcd4  = ?/0 \n"
            "-----------------------------------------------------------------------------\n"
            ,est_corrompu, numero_mot,donnee_bnr,donnee_bcd1,donnee_bcd2,donnee_bcd3,donnee_bcd4);
    printf("\n");
}

int main(void)
{
    afficher_entete_test();
    printf("\n\n");
    afficher_heure_test();
    decimal_a_octale_test();
    calculer_nb_bits_actifs_test();
    afficher_bits_test();
    decoder_mot_a429_test();
}

#endif