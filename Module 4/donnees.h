#ifndef donnes_h
#define donnees_h


typedef struct structure structure;
struct structure
{ 
   float temps;
   int frequencecard;

};
void remplissagetab (structure *t[], FILE *f);
