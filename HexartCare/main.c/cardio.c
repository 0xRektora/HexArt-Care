
#include "cardio.h"
#include <Arduino.h>

// fonction qui récolte les données du pouls à partir de l'E/S analogique, reçoit un pointeur vers la variable du pouls et l'entrée digital en paramètre
void recolte(int *pouls, int analogIn)
{
  /*int i;
  int sum = 0;
  for(i = 0 ; i < 10 ; i++)
  {
    sum += analogRead(analogIn);
  }

  *pouls = sum / 10;
   */
  
  *pouls = analogRead(analogIn);
  *pouls *= 25;
    


  /*if (analogRead(analogIn) !=1023)
  {
    *pouls=0;
  }
  else
  {
    *pouls = 1;
  }
  */
}

// fonction qui calcule le temps démarrage du programme, reçoit un pointeur vers la variable du temps en paramètre
void calcule(long int *temps)
{
  *temps = millis();

}


