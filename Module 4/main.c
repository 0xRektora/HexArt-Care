#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "donnees.h"


int main(int argc, char *argv[]) {
	 structure t[20];
	 int n,i;
	 
	  
remplissagetab (structure *t[], FILE *fstream, &n);
affichermenu();



  for(i=0;i<n;i++)
{ printf("%d"t[i].frequencecard)
}

	
	return 0;
}
