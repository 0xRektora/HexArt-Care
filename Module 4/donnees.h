
#ifndef DONNEES_H
#define DONNEES_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1024  //Taille du buffer

typedef struct structure
{ 
 
  int temps;
  int frequencecard;

}structure;
 void remptab (structure tab[], int *n);

#endif
