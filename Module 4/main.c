#include <stdio.h>
#include <stdlib.h>

typedef
struct
{ 
 
  float temps;
  int frequencecard;

}freq;

void remplissagetab (freq *t[], FILE *f)
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

int main(int argc, char *argv[]) {
	ferq t[6]; 
	remplissagetab (freq *t[i], FILE *f);

	
	return 0;
}
