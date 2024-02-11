#include <stdio.h>
#include <stdlib.h>

#include "configuration.h"
#include "decodeur/a429.h"
#include "udp/port_udp.h"

#if APPLICATION

int main(void)
{
    int port = initialiser_port_udp(UDP_PORT);
    afficher_entete_decodeur();
    for(int i = 1; i > 0; i++)
    {
        unsigned int mot_a429 = 0;

        recevoir_port_udp(port,&mot_a429,sizeof(unsigned int));
        if(mot_a429 != 0)
        {
            afficher_mot_a429(mot_a429);
        }

    }

    detruire_port_udp(UDP_PORT);
    return EXIT_SUCCESS;
}

#endif