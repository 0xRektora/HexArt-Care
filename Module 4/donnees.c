#include <stdlib.h>
#include <stdio.h>

void remplissagetab (freq *t[i], FILE *f)
{ 
   FILE* f = NULL;

    f = fopen("test.csv", "r");
    i=0;
    while(!feof(f))
    {  fscanf(f, "%d;%d;",&x ,&y );
      *t[i].frequencecard= x;
      *t[i].temps=y;
      i++;
	}
    
}
