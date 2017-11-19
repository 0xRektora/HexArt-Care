/*Module 1 Cardio / 2ème partie programmation arduino 
Mendi Sadek Walid 
Version 0.1
13/11/2017
*/

#include "cardio.h"
#include "coeur.h"
#include <string.h>

//Variables utilisé

int pouls = 100;
int btm = 0;
String msg = "";
int moyenne_val = 0;
boolean moyenne_lock = true;
int valmax = 0;
int valmin = 1023;
unsigned long temps = 0; // temps en ms calculé depuis le démarrage du programme arduino
unsigned long tmp_temps = 500; // variable temporaire qui gardera en mémoire le temps précédent
boolean lock = false;
char valid_char = ";";
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

  int i;

    recolte(&pouls, analogIn);
    pouls = map(pouls, 0, 1023, 0, 255);
      if(pouls > valmax)
        valmax = pouls;
      
    if(pouls < valmin)
      valmin = pouls;
  
  if(moyenne_lock && millis() < 2000)
  {
    moyenne_val = valmax-valmin;
    if(millis()> 2000)
    {
      moyenne_lock = false;
    }
  }


  

   if(millis()-temps > 2000 )
    {
      lock = true;
      calcule(&temps);
    }

  if(valmax-valmin > moyenne_val || pouls < 250)
     {
     if(lock)
   {
      btm+=1;
      allumage_led(&pouls);
      msg = "";
      msg+= (String)btm;
      msg+= ";";
      msg+= (String)temps;
      if(strchr(valid_char, msg))
        Serial.print(msg);
      switch_switch();
      valmax = 0;
      valmin = 1023;
      calcule(&temps);
      lock = false;
      delay(2);
      }
      
      
   }

   
 //Serial.write( 0xff );                                                         
 //Serial.write( (pouls>> 8) & 0xff );                                            
 //Serial.write( pouls & 0xff );

}
