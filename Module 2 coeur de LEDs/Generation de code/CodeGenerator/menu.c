#include "menu.h"

//Fonction qui crée les fichiers qui permettent de gérer l'affichage des LEDs
void led_affichage(unsigned int *choix)
{
    //Affichage du menu
    do
    {
        system("COLOR C");
        printf("\n\n");
        printf("                          [-]--------------------------------------------------------[-]\n\n");
        printf("                           |         [+] 1.Allumage de toutes les LEDs                |\n");
        printf("                           |         [+] 2.Allumage d'une LED sur deux                |\n");
        printf("                           |         [+] 3.Allumage d'une LED sur trois               |\n");
        printf("                           |         [+] 4.Allumage d'une LED ( au choix )            |\n");
        printf("                           |         [+] 5.Allumage des LEDs en mode chenille         |\n");
        printf("                           |         [+] 6.Allumage des LEDs en mode Flexy            |\n\n");
        printf("                          [-]--------------------------------------------------------[-]\n\n");
        printf("                                                        [+] ");
        scanf("%d", choix);
    }while(choix < 1 && choix > 6);
}


