/****************************************************************************************
/*                                          A429.H                                      *
/****************************************************************************************
    Auteur : Jasmin Papierz-Lambert et Hakim-Anis Hamani
    Date   : 11 février 2024

    Ce module contient les méthodes utilisé pour manipuler les données de vols recu par
    le protocole ARINC-429.

    On y retrouve les sous-programmes suivants :
      - afficher_entete_decodeur : Cette fonction permet d'afficher l'en-tete du decodeur
                                   lorsque le programme roule sous mode application.
      - afficher_mot_a429: Cette fonction permet d'afficher les informations d'un mot
                           recu par le concentrateur de manière formaté.
      - decoder_mot_a429: Cette fonction permet de décoder un messages ayant un protocole
                          BCD ou BNR et de subdiviser les nombreuses données pour les
                          gerder en mémoire

*****************************************************************************************/

#ifndef H2024TP1_A429
#define H2024TP1_A429

/* Personnes ayant travaillé sur le decodeur. */
#define NOM_AUTEURS    "Jasmin Papierz-Lambert et Hakim-Anis Hamani"

/* Session quand le decodeur a était fait. */
#define SESSION         "Hivers 2024"

/*
    AFFICHER_ENTETE_DECODEUR

    Cette fonction permet d'afficher l'en-tete du decodeur lorsque
    le programme roule sous mode application.

    Paramètres:
        - Aucun.

    Retour:
        - Aucun.
*/
void afficher_entete_decodeur(void);

/*
    AFFICHER_MOT_A429

    Cette fonction permet d'afficher les informations d'un mot
    recu par le concentrateur de manière formaté.

    Paramètres:
        - mot_a429 : Mot envoyer par le concenstrateur de données sous forme hexadecimal.

    Retour:
        - Aucun.
*/
void afficher_mot_a429(unsigned int mot_a429);

/*
    DECODER_MOT_A429

    Cette fonction permet de décoder un messages ayant un protocole BCD ou BNR et de subdiviser
    les nombreuses données pour les gerder en mémoire.

    Paramètres:
        - mot_a429      : Mot envoyer par le concenstrateur de données sous forme hexadecimal.
        - est_corrompu  : Valeur représentant l'état de corrumption du mot.
        - numero_mot    : Valeur représentant le numéro du mots en decimal.
        - donnee_bnr    : Valeur représentant le numéro recu en encodage BNR.
        - donnee_bcd1   : Valeur représentant la première donnée recu en encodage BCD.
        - donnee_bcd2   : Valeur représentant la deuxième donnée recu en encodage BCD.
        - donnee_bcd3   : Valeur représentant la troisième donnée recu en encodage BCD.
        - donnee_bcd4   : Valeur représentant la quatrième donnée recu en encodage BCD.

    Retour:
        - Aucun.
*/
void decoder_mot_a429(unsigned int mot_a429,int *est_corrompu,int *numero_mot,double *donnee_bnr,int *donnee_bcd1,int *donnee_bcd2,int *donnee_bcd3,int *donnee_bcd4);
#endif