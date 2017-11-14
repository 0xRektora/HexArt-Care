/*Module 1 Cardio / 2ème partie programmation arduino 
Mendi Sadek Walid 
Version 0.1
13/11/2017
*/

#include "cardio.h"

//Variables utilisé

int pouls = 0;
int temps = 0; // temps en ms calculé depuis le démarrage du programme arduino
int digitalI = 13; // entrée digitale arduino utilisée pour récupérer les données
 
//Variables utilisées


//Main setup, déclaration variables / constantes 
void setup() {
    Serial.begin(9600);
    pinMode(digitalI, INPUT);
}

//Main program, récupération et envoi de données 
void loop() {
  calcule(&temps);
  recolte(&pouls, digitalI);
  Serial.println(pouls);
  delay(2);
  Serial.println(temps);
  delay(2);
  

}
