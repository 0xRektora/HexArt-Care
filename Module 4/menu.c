#include <stdio.h>
#include <stdlib.h>

int affichermenu()
{   int choix;
     	system("color C");

	do {
	 	printf("%n ** vous devez choisir l'option que vous voulez faire **\n\n"); //choix d'operation
	    printf ("\n\n");
        printf ("\t\t************************************\n");
        printf ("\t\t**\n");
        printf ("\t\t** 1 ..Afficher les données dans l’ordre du fichier .csv \n");
        printf ("\t\t** 2 ..Afficher les données en ordre croissant/décroissant (selon le temps, selon le pouls)    \n");
        printf ("\t\t** 3 ..Rechercher et afficher les données pour un temps particulier\n");
        printf ("\t\t** 4 ..Afficher la moyenne de pouls dans une plage de temps donnée\n");
        printf ("\t\t** 5 ..Afficher le nombre de lignes de données actuellement en mémoire\n");
        printf ("\t\t** 6 ..Rechercher et afficher les max/min de pouls avec leurs temps associé\n");
        printf ("\t\t** 7 ..Quitter l’application\n");

        printf ("\t\t**\n");
        printf ("\t\t************************************\n");


     	 	printf("\n\n ce que vous voulez faire \n\ttapper  (1 ou 2...4)  :   ");
            scanf("%d",&choix);


	 } while(choix>=7 && choix<=1);
	return choix;

}
void choixmenu (int choix )

{ int r,q,choix2;
switch (choix2)
 {
	case 1:
      afficherdordf(tab, n);
	   break;
	case 2:
		choix2=affichermenub();
		choixmenu2 (choix2);
       break;
	case 3:
		affichuntempspar(tab, n);
      break;
	case 4:
		affichpotdo(pp, tab )
      break;
	 case 5:
	 	 affichnbdelincsv (n);
	   break;
	 case 6:
	 	choix2=affichermenuc();
	 	choixmenu3 (choix2);
	 	
	 	break;

	 case 7:
	 	printf("\n\n\n\\t\t\t vous allez quitter le prgramme \n\n\n\n");
	 	for (r=1;r<=1;r++)
		 { // pour gagner du temps avant la fermmiture du programme
            for (q=0;q<=800000000;q++);

         }
	 	system ("cls");
	 	break;

 }

}


int affichermenub()
{   int choix2;
     	system("color C");

	do {
	 	printf("%n ** vous devez choisir l'option que vous voulez faire  **\n\n"); //choix d'operation
	    printf ("\n\n");
        printf ("\t\t************************************\n");
        printf ("\t\t**\n");
        printf ("\t\t** 1 ..Afficher les données en ordre CROISSANT  selon le temps   \n");
        printf ("\t\t** 2 ..Afficher les données en ordre DECROISSANT selon le temps   \n");
        printf ("\t\t** 3 ..Afficher les données en ordre CROISSANT  selon le pouls   \n");
        printf ("\t\t** 4 ..Afficher les données en ordre DECROISSANT selon le pouls   \n");
        printf ("\t\t**\n");
        printf ("\t\t************************************\n");


     	 	printf("\n\n ce que vous voulez faire \n\ttapper  (1 ou 2...4)  :   ");
            scanf("%d",&choix2);


	 } while(choix2>=4 || choix2<=1);
	return choix2;
}


void choixmenu2 (int choix2 )

{ 
switch (choix2)
 {
	case 1:
      affichdordrecroistemps( t, n);
	   break;
	case 2:
		affichordredecroistemp( t,n);
       break;
	case 3:
		affichdordrecroispouls(t,n);
      break;
	case 4:
	affichordredecroispouls(t,n);
      break;


 }

}


int affichermenuc()
{   int choix2;
     	system("color C");

	do {
	 	printf("%n ** vous devez choisir l'option que vous voulez faire  **\n\n"); //choix d'operation
	    printf ("\n\n");
        printf ("\t\t************************************\n");
        printf ("\t\t**\n");
        printf ("\t\t** 1 ..Rechercher et afficher les max de pouls avec leurs temps associé\n");
        printf ("\t\t** 2 ..Rechercher et afficher les min de pouls avec leurs temps associé\n");
        printf ("\t\t**\n");
        printf ("\t\t************************************\n");


     	 	printf("\n\n ce que vous voulez faire \n\ttapper  (1 ou 2...4)  :   ");
            scanf("%d",&choix2);


	 } while(choix2>=2 || choix2<=1);
	return choix2;

} 




void choixmenu3 (int choix2)

{ 
switch (choix2)
 {
	case 1:
      affichermax (t, n);
	   break;
	case 2:
		affichermin (t, n);
      break;
 }

}


