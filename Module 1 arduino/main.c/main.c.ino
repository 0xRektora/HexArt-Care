/*Module 1 Cardio / 2ème partie programmation arduino 
Mendi Sadek Walid 
Version 0.1
13/11/2017
*/

#include "cardio.h"

//Variables utilisé

int pouls = 0;
int temps = 0; // temps en ms calculé depuis le démarrage du programme arduino
int digitalI = 13; // entrée digital arduino utilisé pour récupérer les données
 
//Variable utilisé


//Main setup, déclaration variable / constantes 
void setup() {
    Serial.begin(9600);
    pinMode(digitalI, INPUT);
}

//Main program, récupération et envoie des données 
void loop() {
  calcul(&temps);
  recolte(&pouls, digitalI);
  Serial.println(pouls);
  delay(1);
  Serial.println(temps);
  delay(1);
  

}
