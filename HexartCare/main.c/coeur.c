#include <Arduino.h>
#include "coeur.h"
#include "param.h"

//allumage de toutes les LEDs selon le rythme des battements du coeur
void allumage_led(int *pouls)
{
    switch(FUNCTION)
    {
      case 1:
        blink_mode(pouls);
        break;
      case 2:
        one_led_mode(pouls);
        break;
      case 3:
        two_led_mode(pouls);
        break;
      case 4:
        select_led_mode();
        break;
      case 5:
        caterpillar_mode(pouls);
        break;
      case 6:
        flexy_mode(pouls);
        break;
      default:
         break;
    }
}

//Fonction d'allumage des LEDs en mode blink
void blink_mode(int *pouls)
{
    int i;
    for(i = 2; i <= 11 ; i++)
    {
      if(*pouls >400)
      {
        digitalWrite(i, HIGH);
      }
      else
      {
        digitalWrite(i, LOW);
      }
        
    }
}
//Fonction d'allumage d'une LED sur 2
void one_led_mode(int *pouls)

{
  int i;
  for(i = 2 ; i <= 11 ; i++)
  {
    if(i == 2)
      digitalWrite(i, HIGH);
    else if(i%2 != 0)
    {
      digitalWrite(i, HIGH);
    }
  }
  delay(100);
  for(i = 2 ; i <= 11 ; i++)
  {
    if(i == 2)
      digitalWrite(i, LOW);
    else if(i%2 != 0)
    {
      digitalWrite(i, LOW);
    }
  }

  delay(100);

  

  for(i = 3 ; i <= 10 ; i++)
  {
    if(i == 3)
      digitalWrite(i, HIGH);
    else if(i%2 == 0)
    {
      digitalWrite(i, HIGH);
    }
  }
  delay(100);
  for(i = 3 ; i <= 10 ; i++)
  {
    if(i == 3)
    {
      digitalWrite(i, LOW);
    }
    else if(i%2 == 0)
    {
      digitalWrite(i, LOW);
    }
  }

  delay(200);

  for(i = 3 ; i <= 10 ; i++)
  {
    if(i == 3)
      digitalWrite(i, HIGH);
    else if(i%2 == 0)
    {
      digitalWrite(i, HIGH);
    }
  }
  delay(100);
  for(i = 3 ; i <= 10 ; i++)
  {
    if(i == 3)
    {
      digitalWrite(i, LOW);
    }
    else if(i%2 == 0)
    {
      digitalWrite(i, LOW);
    }
  }
  for(i = 2 ; i <= 11 ; i++)
  {
    if(i == 2)
      digitalWrite(i, HIGH);
    else if(i%2 != 0)
    {
      digitalWrite(i, HIGH);
    }
  }
  delay(100);
  for(i = 2 ; i <= 11 ; i++)
  {
    if(i == 2)
      digitalWrite(i, LOW);
    else if(i%2 != 0)
    {
      digitalWrite(i, LOW);
    }
  }

}

//Fonction d'allumage d'une LED sur deux
void two_led_mode(int *pouls)
{
 int i;
  for(i = 2 ; i < 11 ; i++)
  {
    if(i == 2)
      digitalWrite(i, HIGH);
    else if(i%2 != 0)
    {
      digitalWrite(i, HIGH);
    }
  }
  delay(100);
  for(i = 2 ; i < 11 ; i++)
  {
    if(i == 2)
      digitalWrite(i, LOW);
    else if(i%2 != 0)
    {
      digitalWrite(i, LOW);
    }
  }

  delay(100);

  

  for(i = 3 ; i < 10 ; i++)
  {
    if(i == 3)
      digitalWrite(i, HIGH);
    else if(i%2 == 0)
    {
      digitalWrite(i, HIGH);
    }
  }
  delay(100);
  for(i = 3 ; i < 10 ; i++)
  {
    if(i == 3)
    {
      digitalWrite(i, LOW);
    }
    else if(i%2 == 0)
    {
      digitalWrite(i, LOW);
    }
  }

  delay(200);

  for(i = 3 ; i < 10 ; i++)
  {
    if(i == 3)
      digitalWrite(i, HIGH);
    else if(i%2 == 0)
    {
      digitalWrite(i, HIGH);
    }
  }
  delay(100);
  for(i = 3 ; i < 10 ; i++)
  {
    if(i == 3)
    {
      digitalWrite(i, LOW);
    }
    else if(i%2 == 0)
    {
      digitalWrite(i, LOW);
    }
  }
  for(i = 2 ; i < 11 ; i++)
  {
    if(i == 2)
      digitalWrite(i, HIGH);
    else if(i%2 != 0)
    {
      digitalWrite(i, HIGH);
    }
  }
  delay(100);
  for(i = 2 ; i < 11 ; i++)
  {
    if(i == 2)
      digitalWrite(i, LOW);
    else if(i%2 != 0)
    {
      digitalWrite(i, LOW);
    }
  }
}


//Fonction d'allumage d'une LED choisis
void select_led_mode()
{
  digitalWrite(LED, HIGH);
  delay(100);
  digitalWrite(LED, LOW);
  delay(100);
  digitalWrite(LED, HIGH);
  delay(100);
  digitalWrite(LED, LOW);
}

//Fonction d'allumage des LEDs en mode chenille
void caterpillar_mode(int *pouls)
{
  int i;
  for(i = 2 ; i <= 11 ; i++)
  {
    if(i % 2 != 0)
    {
      digitalWrite(i, HIGH);
      delay(75);
      digitalWrite(i, LOW);
      delay(75);
    }
    else if( i == 2)
    {
      digitalWrite(i, HIGH);
      delay(75);
      digitalWrite(i, LOW);
      delay(75);
    }
  }
  for(i = 11 ; i >= 2 ; i--)
  {
    if(i % 2 == 0 && i != 2)
    {
      digitalWrite(i, HIGH);
      delay(75);
      digitalWrite(i, LOW);
      delay(75);
    }
  }
}

//Fonction optionnelle d'allumage des LEDs 
void flexy_mode(int *pouls)
{

   int i;
   for( i = 2 ; i <= 11 ; i++)
  {
    if(i == 2)
    {
      digitalWrite(i, HIGH);      
      delay(30);
      digitalWrite(i, LOW);  
    }
    else if(i == 11)
    {
      digitalWrite(i, HIGH);      
      delay(30);
      digitalWrite(i, LOW); 
    }
    else
    {
      digitalWrite(i, HIGH);
      digitalWrite(i+1, HIGH);
      delay(30);
      digitalWrite(i, LOW);
      digitalWrite(i+1, LOW);
      
    }
  }
  for( i = 11 ; i >= 2 ; i--)
  {
    if(i == 2)
    {
      digitalWrite(i, HIGH);      
      delay(30);
      digitalWrite(i, LOW);  
    }
    else if(i == 11)
    {
      digitalWrite(i, HIGH);      
      delay(30);
      digitalWrite(i, LOW); 
    }
    else
    {
      digitalWrite(i, HIGH);
      digitalWrite(i+1, HIGH);
      delay(30);
      digitalWrite(i, LOW);
      digitalWrite(i+1, LOW);
      
    }
}
}
