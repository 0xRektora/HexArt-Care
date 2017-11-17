#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"
#include "action.h"
#include "menu.h"
int main(int argc, char *argv[])
{
 structure tab [10];
	int n=0,i,choix1;
	remptab (tab, &n);
    choix1=affichermenu();
    choixmenu (choix1,  tab, n );

	system("PAUSE");






}
