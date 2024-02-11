/****************************************************************************************
/*                                          UTILITAIRE.H                                *
/****************************************************************************************
    Auteur : Jasmin Papierz-Lambert et Hakim-Anis Hamani
    Date   : 10 février 2024

    Ce module contient les méthodes utilisé pour manipuler les données de vols recu par
    le protocole ARINC-429.

    On y retrouve les sous-programmes suivants :
      - afficher_heure : Afficher l'heure par un nombre de secondes.
      - decimal_a_octale: Convertir un nombre décimale à octale.
      - calculer_nb_bits_actifs : Retourner le nombre de 1 dans une valeure binaire
      - afficher_bits :

*****************************************************************************************/
#ifndef H2024TP1_UTILITAIRE
#define H2024TP1_UTILITAIRE

// Nombre de secondes par heure
#define HEURE_SECONDE   3600

// Nombre de secondes par minute
#define MINUTE_SECONDE  60

/*
    AFFICHER_HEURE

    Cette fonction permet d'afficher l'heure par un nombre de secondes.

    Paramètres:
        - secondes_entre: Nombre de secondes.

    Retour:
        - Aucun.
*/
void afficher_heure(int secondes_entre);

/*
    DECIMAL_A_OCTAL

    Cette fonction permet de convertir un nombre decimale en octale.

    Paramètres:
        - nombre_base_10: Nombre en base dix à convertir.

    Retour:
        - Aucun.
*/
int decimal_a_octale(int nombre_base_10);

unsigned int calculer_nb_bits_actifs(unsigned int nbrAnalyse);

void afficher_bits(unsigned int valeur, int bit_depart, int bit_fin);

#endif