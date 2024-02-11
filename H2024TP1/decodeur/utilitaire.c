/****************************************************************************************
/*                                          A429.C                                      *
/****************************************************************************************
    Auteur : Jasmin Papierz-Lambert et Hakim-Anis Hamani
    Date   : 11 février 2024

    Ce module contient les fonctions utilitaires permettant la conversion et
    la récupération de certaines données dans le programme.

*****************************************************************************************/

#include "utilitaire.h"
#include "..\configuration.h"
#include <stdio.h>
#include <math.h>


/****************************************************************************************
*                           DÉFINTION DES FONCTIONS PUBLIQUES                           *
*****************************************************************************************/


void afficher_heure(int secondes_entre) {

    // Variable contenant le nombre d'heure;
    int heures = secondes_entre / HEURE_SECONDE;

    // Variable contenant le nombre de minutes;
    int minutes = (secondes_entre % HEURE_SECONDE) / MINUTE_SECONDE;

    // Variable contenant le nombre de secondes;
    int secondes = (secondes_entre % HEURE_SECONDE) % MINUTE_SECONDE;

    // Afficher l'heure
    printf("%02ih%02im%02is", heures, minutes, secondes);

}

int decimal_a_octale(int nombre_base_10) {

    // Nombre en base dix recu en parametre
    int nombre = nombre_base_10;

    //Liste de caractères permettant le stockage des chiffres sous base huit
    char nbr_base8[255];

    // Nombre de chiffre se trouvant dans la liste de chiffres de base huit sous forme LSD
    int nombre_chiffre_base_huit = 0;

    // Boucle qui convertie jusqu'a que la somme du nombre decimal est zéro
    while (nombre >= 1) {
        // Nombre restant de la division par 8
        nbr_base8[nombre_chiffre_base_huit] = nombre % 8;

        // Permet de definir la prochaine base de modulo pour la prochaine boucle
        nombre = nombre / 8;

        // Nombre de chiffre augmenter car un nouveau chiffre à était ajouter à la liste
        nombre_chiffre_base_huit++;
    }
    // Nombre en base huit renvoyé en paramettre après être inverser
    int nombre_base_huit_converti = 0;

    // Boucle permettant d'inverser la liste de base huit afin d'obtenir le nombre octale sous forme MSD
    for (int index = 0; index < nombre_chiffre_base_huit; index++) {

            // Permet de placer un chiffre à position en octal en multipliant par la puissance de sa position dans la liste
            nombre_base_huit_converti += pow(10,index)*nbr_base8[index];
    }

    // Retourne la valeur final convertie
    return nombre_base_huit_converti;
}

unsigned int calculer_nb_bits_actifs(unsigned int nbr_analyse)
{
    int index; // Index qui permet de contrôller la boucle for.
    unsigned int masque = 1; // Masque binaire pour extraire les données voulu.
    unsigned int nb_bits = 0; // Compteur qui nous permet de compter le nombre de bits a 1.

    // Boucle for qui passe a travers tous les bits de nbrAnalyse
    for(index = 0; index <= TAILLEDONNEES; index++)
    {
        unsigned int nbr_analyse_temp = nbr_analyse >> index; // On décale vers la droite.
        unsigned int verification_bit = nbr_analyse_temp & masque; // On extrait le bit voulu pour analyse.

        if(verification_bit == 1)
        {
            nb_bits++; // Si le bit est actif (=1), on augmente le compteur de 1.
        }
    }

    return nb_bits;
}

void afficher_bits(unsigned int valeur, int bit_depart, int bit_fin)
{
    int masque = 1; // Permet de garder la valeur du bit selectionné.

    // Boucle for qui va passer à travers les bits inclusivement entre bit_depart et bit_fin.
    // On passe a l'envers, c'est-a-dire de fin vers début pour bien afficher les bits en ordre.
    for(int i = bit_fin; i >= bit_depart; i--)
    {
        unsigned int valeur_decale = valeur >> i; // Décalage de la valeur.
        unsigned int valeur_bit = valeur_decale & masque; // On extrait la valeur du bit.
        int verification = i % 4; // On vérifie si on a bien un groupe de 4 bits.
        printf("%i",valeur_bit); // On affiche la valeur du bit sélectionné.
        if(verification == 0) // Si on a un groupe de 4 bits, on sépare le prochain groupe avec un espace.
        {
            printf(" ");
        }
    }

}