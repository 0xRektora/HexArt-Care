/*Module 1 Cardio / 2ème partie programmation arduino 
Mendi Sadek Walid 
Version 0.1
13/11/2017
*/

#include "cardio.h"
#include "coeur.h"
//Variables utilisé

int pouls = 100;
int t = 0;
int valmax = 0;
int valmin = 1023;
long int temps = 0; // temps en ms calculé depuis le démarrage du programme arduino
String data = ""; //Données à envoyer
int analogIn = 0; // entrée digitale arduino utilisée pour récupérer les données
//Variables utilisées


//Main setup, déclaration variables / constantes 
void setup() {
    Serial.begin(9600);
    int i;
    for(i = 2 ; i <= 11 ; i++)
    {
      pinMode(i, OUTPUT);
    }
    
}
  
//Main program, récupération et envoi de données 
void loop() {
  recolte(&pouls, analogIn);
  if(t != 100)
  {
    t++;
  }
  else
  {
    t = 0;
    valmax = 0;
    valmin = 1023;
  }
  //calcule(&temps);
  //data = (String)pouls;
  //data += ';';
  //data += (String)temps;
 
  //Serial.write( 0xff );                                                         
  //Serial.write( (pouls>> 8) & 0xff );                                            
  //Serial.write( pouls & 0xff );
  //allumage_led(&pouls);
  if(pouls >= valmax)
    valmax = pouls;
  if(pouls <=valmin)
    valmin = pouls;
 //Serial.println(valmax);
 if(pouls == 1023)
 {
  Serial.println(pouls);
 }

}
