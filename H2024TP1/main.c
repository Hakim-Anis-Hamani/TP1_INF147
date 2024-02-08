#include <stdlib.h>
#include <stdio.h>

#include "configuration.h"
#include "decodeur/a429.h"
#include "udp/port_udp.h"

#if APPLICATION

int main(void)
{
    afficher_entete_decodeur();
    initialiser_port_udp(UDP_PORT);

    for(int i = 1; i > 0; i++)
    {
        unsigned int mot_a429 = 0;
        recevoir_port_udp(UDP_PORT,&mot_a429,32);
        if(mot_a429 != 0)
        {
            afficher_mot_a429(mot_a429);
        }
    }

    return EXIT_SUCCESS;
}

#endif