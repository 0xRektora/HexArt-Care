//From Arduino to Processing to Txt or cvs etc. 
//inclusion des librairies 
import processing.serial.*;
//Déclaration des variable de fichier et de port USB
PrintWriter output;
Serial udSerial;

//Initialisation du port USB et du fichier 
void setup() {
  udSerial = new Serial(this, Serial.list()[0], 9600);
  output = createWriter ("Battements.csv");
}
  //Récupération des données envoyées par l'Arduino et son écriture sur la console + le fichiers
  void draw() {
    
    if (udSerial.available() > 0) {
      String SenVal = udSerial.readString();
      if (SenVal != null) {
        System.out.println(SenVal);
        output.println(SenVal);
      }
    }
  }
  //Pression d'une touche -> écriture sur le fichier csv + extinction du programme 
  void keyPressed(){
    output.flush();
    output.close();
    exit(); 
  }