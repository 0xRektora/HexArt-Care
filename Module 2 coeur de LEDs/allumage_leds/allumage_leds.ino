//fixer les pins digitaux de 2 à 11 en mode sortie
int i;

void setup() {
  for(i = 2 ; i <= 11 ; i++)
  {
    pinMode(i, OUTPUT);
  }

}

void loop() {
  //allumage de toutes les LEDs qui composent le coeur
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
  
  //delay(500);

  /*
  //extinction de toutes les LEDs qui composent le coeur
  for( i = 2 ; i <= 11 ; i++)
  {
    digitalWrite(i, LOW);  
  }
  delay(500);
  */
}
