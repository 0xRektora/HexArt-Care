#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.h"

//Code qui va gérer l'affichage des LEDs selon le choix de l'utilisateur
int main()
{

    int choix = 0; // Choix de l'utilisateur
    led_affichage(&choix); //Affichage du menu
    draw(&choix);// Ecriture dans le fichier

    return 0;
}
