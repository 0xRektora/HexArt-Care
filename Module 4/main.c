#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "menu.h"
#include "donnees.h"
#include "action.h"


int main(int argc, char *argv[]) 
{  structure tab[100];
int n=0,i,choix1;
remptab (tab, &n);
choix1=affichermenu();
choixmenu (choix1 );






	return 0;
}
