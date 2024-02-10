#ifndef H2024TP1_A429
#define H2024TP1_A429

#define NOM_AUTEURS    "Jasmin Papierz-Lambert et Hakim-Anis Hamani"
#define SESSION         "Hivers 2024"

#define BITDEPART       0
#define BITFIN          31

void afficher_entete_decodeur(void);

void afficher_mot_a429(unsigned int mot_a429);

void decoder_mot_a429(unsigned int mot_a429,int *est_corrompu,int *numero_mot,double *donnee_bnr,int *donnee_bcd1,int *donnee_bcd2,int *donnee_bcd3,int *donnee_bcd4);
#endif