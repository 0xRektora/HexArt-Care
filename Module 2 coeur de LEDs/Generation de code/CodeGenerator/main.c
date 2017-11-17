#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.h"

//Code qui va gérer l'affichage des LEDs selon le choix de l'utilisateur
int main()
{

    int choix = 0; // Choix de l'utilisateur
    int led = 0;
    led_affichage(&choix, &led); //Affichage du menu
    draw(&choix, &led);// Ecriture dans le fichier

    return 0;
}
