/****************************************************************************************
/*                                          UTILITAIRE.H                                *
/****************************************************************************************
    Auteur : Jasmin Papierz-Lambert et Hakim-Anis Hamani
    Date   : 11 février 2024

    Ce module contient les méthodes utilisé pour manipuler les données de vols recu par
    le protocole ARINC-429.

    On y retrouve les sous-programmes suivants :
      - afficher_heure : Afficher l'heure par un nombre de secondes.
      - decimal_a_octale: Convertir un nombre décimale à octale.
      - calculer_nb_bits_actifs : Retourner le nombre de 1 dans une valeure binaire
      - afficher_bits : Décode la valeur hexadécimale reçu et de l'afficher sous forme
                        binaire séparé en groupes de 4, tout en restant dans les
                        limites inclusives indiquées.

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

/*
    CALCULER_NB_BITS_ACTIFS

    Cette fonction permet de compter le nombres de bits qui sont égaux à 1
    dans la valeur binaire du int non signé reçu.

    Paramètres:
        - nbr_analyse: Nombre en base dix non signé à convertir.

    Retour:
        - Int qui indique le nombre de bits qui sont à 1.
 */
unsigned int calculer_nb_bits_actifs(unsigned int nbr_analyse);

/*
    AFFICHER_BITS

    Cette fonction permet de décoder la valeur hexadécimale reçu et de l'afficher sous forme
    binaire séparé en groupes de 4, tout en restant dans les limites inclusives indiquées.

    Paramètres:
        - valeur: valeur en base hexadécimale.
        - bit_depart: valeur en base dix qui indique le bit de début.
        - bit_fin: valeur en base dix qui indique le bit de fin.

    Retour:
        - Aucun.
 */
void afficher_bits(unsigned int valeur, int bit_depart, int bit_fin);

#endif