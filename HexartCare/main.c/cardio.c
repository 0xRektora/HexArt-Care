
#include "cardio.h"
#include <Arduino.h>

// fonction qui récolte les données du pouls à partir de l'E/S analogique, reçoit un pointeur vers la variable du pouls et l'entrée digital en paramètre
void recolte(int *pouls, int analogIn)
{
  
  *pouls = analogRead(analogIn);
  
}

// fonction qui calcule le temps démarrage du programme, reçoit un pointeur vers la variable du temps en paramètre
void calcule(long int *temps)
{
  *temps = millis();

}


