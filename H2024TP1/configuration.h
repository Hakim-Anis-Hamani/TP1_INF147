/****************************************************************************************
/*                                          CONFIGURATION.H                             *
/****************************************************************************************
    Auteur : Jasmin Papierz-Lambert et Hakim-Anis Hamani
    Date   : 10 février 2024

    Ce module contient les constante utilisé pour le fonctionnement de la communication
    et la compilation du décodeur ARINC-429.

    Liste des fonctions publiques:
      - Aucunes.
*****************************************************************************************/

#ifndef H2024TP1_CONFIGURATION
#define H2024TP1_CONFIGURATION

//  Constante booléenne permetant de lancer le progranne sous mode test
#define TEST            0

//  Constante booléenne permetant de lancer le progranne sous mode Application
#define APPLICATION     1

//  Constante utilisé pour la communication entre decodeur et concentrateur
#define UDP_PORT        55001
#define PAIR_PARITY     0
#define ODD_PARITY      1
#define RECEPTOR_PARITY ODD_PARITY

// Taille d'un mots envoyer par le concentrateur
#define TAILLEDONNEES   31

#endif