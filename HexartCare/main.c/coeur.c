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

void flexy_mode(int *pouls)
{
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

void select_led_mode(int *led)
{
  
}

void caterpillar_mode(int *pouls)
{
  
}

void flexy_mode(int *pouls)
{
  
}

