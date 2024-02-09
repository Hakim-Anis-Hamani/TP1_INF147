#ifndef H2024TP1_UTILITAIRE
#define H2024TP1_UTILITAIRE

#define HEURE_SECONDE   3600
#define MINUTE_SECONDE  60

void* afficher_heure(int secondesEntre);

int decimal_a_octale(int nbrBase10);

unsigned int calculer_nb_bits_actifs(unsigned int nbrAnalyse);

void afficher_bits(unsigned int valeur, int bit_depart, int bit_fin);

#endif