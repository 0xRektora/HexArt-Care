#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "donnees.h"
#include "actions.h"



  int affichermenu() // fonction qui affiche le menu et retourne une valeur du choix de l'utilisateur 
{   int choix;
     	system("color C");

	do {
	 	printf("%n ** vous devez choisir l'option que vous voulez faire **\n\n"); //choix d'operation
	    printf ("\n\n");
        printf ("\t\t************************************\n");
        printf ("\t\t**\n");
        printf ("\t\t** 1 ..Afficher les donnees dans l'ordre du fichier .csv \n");
        printf ("\t\t** 2 ..Afficher les donnees en ordre croissant/decroissant (selon le temps, selon le pouls)    \n");
        printf ("\t\t** 3 ..Rechercher et afficher les donnees pour un temps particulier\n");
        printf ("\t\t** 4 ..Afficher la moyenne de pouls dans une plage de temps donnee\n");
        printf ("\t\t** 5 ..Afficher le nombre de lignes de donnees actuellement en memoire\n");
        printf ("\t\t** 6 ..Rechercher et afficher les MAX/MIN de pouls avec leurs temps associe\n");
        printf ("\t\t** 7 ..Quitter l'application\n");

        printf ("\t\t**\n");
        printf ("\t\t************************************\n");


     	 	printf("\n\n ce que vous voulez faire \n\ttapper  (1 ou 2...7)  :   ");
            scanf("%d",&choix);


	 } while(choix<=1 && choix>=7 );
	return choix;

}
void choixmenu (int choix, structure t[], int n ) // fonction qui va mettre en relation le choix et les fonction 

{ int r,q,choixc,v,b;
switch (choix)
 {
	case 1:
	  system ("cls");
	  printf(" \n\n\t\tAffichage les donnees dans l'ordre du fichier .csv  :\n\n\n");
	  afficherbarr(); 	
      afficherdordf(t, n);
	   break;
	case 2:
		  system ("cls");
		 choixc=affichermenub(); // on fait appel a une fonction qui fait affichage d'un deuxiemme menu
		 system ("cls");
	     choixmenu2 (choixc,  t, n ); // fonction qui va mettre en relation le choix et les fonction 
       break;
	case 3:
	  system ("cls");
	  printf(" \n\n\t\tRechercher et afficher les donnees pour un temps particulier   :\n\n\n");
	  affichuntempspar(t, n);
      break;
	case 4:
	  system ("cls");
	  printf(" \n\n\t\tAfficher la moyenne de pouls dans une plage de temps donnee   :\n\n\n");
		affichpotdo(t, n );
      break;
	 case 5: system ("cls");
	     printf(" \n\n\t\tAfficher le nombre de lignes de donnees actuellement en memoire   :\n\n\n");
	 	 affichnbdelincsv (n);
	   break;
	 case 6:
	 	system ("cls");
	 	choixc=affichermenuc(); // on fait appel a une fonction qui fait affichage d'un deuxiemme menu
	 	system ("cls");
	    choixmenu3 (choixc, t,n ); // fonction qui va mettre en relation le choix et les fonction 
	 	
	 	break;

	 case 7:
	 	
	 	printf("\n\n\n\t\t\t vous allez quitter le prgramme \n\n\t\t\t\t       MERCI:)\n\n\n\n");
	 	for (r=1;r<=1;r++)
		 { // pour gagner du temps avant la fermmiture du programme
            for (q=0;q<=2000000000;q++);

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
        printf ("\t\t** 1 ..Afficher les donnees en ordre CROISSANT  selon le temps   \n");
        printf ("\t\t** 2 ..Afficher les donnees en ordre DECROISSANT selon le temps   \n");
        printf ("\t\t** 3 ..Afficher les donnees en ordre CROISSANT  selon le pouls   \n");
        printf ("\t\t** 4 ..Afficher les donnees en ordre DECROISSANT selon le pouls   \n");
        printf ("\t\t**\n");
        printf ("\t\t************************************\n");


     	 	printf("\n\n ce que vous voulez faire \n\ttapper  (1 ou 2..4)  :   ");
            scanf("%d",&choix2);


	 } while(choix2<=1 && choix2>=4);
	return choix2;

} 

void choixmenu2 (int choix2, structure t[], int n )

{ 
switch (choix2)
 {
	case 1: 
	  printf(" \n\n\t\tAffichage des donnees en ordre CROISSANT  selon le temps   :\n\n\n");
	  afficherbarr();
	  printf("\n\n\n");
      affichdordrecroistemps(t, n);
      printf("\n\n\n\n");
	   break;
	case 2:
	    printf(" \n\n\t\tAffichage des donnees en ordre DECROISSANT  selon le temps   :\n\n\n");
	    afficherbarr();
	    printf("\n\n\n");
		affichordredecroistemp(t, n);
		printf("\n\n\n\n");
      break;
    case 3:
    	printf(" \n\n\t\tAffichage des donnees en ordre CROISSANT  selon le pouls   :\n\n\n");
	    afficherbarr();
	    printf("\n\n\n");
		affichdordrecroispouls(t, n);
		printf("\n\n\n\n");
      break;
    case 4:
    	printf(" \n\n\t\tAffichage des donnees en ordre DECROISSANT  selon le pouls   :\n\n\n");
	    afficherbarr();
	    printf("\n\n\n");
		affichordredecroispouls(t, n);
		printf("\n\n\n\n");
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
        printf ("\t\t** 1 ..Rechercher et afficher les max de pouls avec leurs temps associe\n");
        printf ("\t\t** 2 ..Rechercher et afficher les min de pouls avec leurs temps associe\n");
        printf ("\t\t**\n");
        printf ("\t\t************************************\n");


     	 	printf("\n\n ce que vous voulez faire \n\ttapper  (1 ou 2)  :   ");
            scanf("%d",&choix2);


	 } while(choix2<=1 && choix2>=2);
	return choix2;

} 

void choixmenu3 (int choix2, structure t[], int n )

{ 
switch (choix2)
 {
	case 1:
	  printf(" \n\n\t\tRecherche et affichage du MAXIMUM de pouls avec leurs temps associe   :\n\n\n");
	  afficherbarr();
      printf("\n\n\n");	
      affichermax (t, n);
      printf("\n\n\n\n");
	   break;
	case 2:
	  printf(" \n\n\t\tRecherche et affichage du MINIMUM de pouls avec leurs temps associe   :\n\n\n");
	  afficherbarr();
      printf("\n\n\n");
	  affichermin (t, n);
	  printf("\n\n\n\n");
      break;
 }

}
    
 void afficherbarr() // fonction pour afficher une barre de chargemenet 
 { int v,b;
       for (v=1;v<18;v++)
	   {for (b=0;b<60000000;b++);
            printf ("%c",219);
            
       }  
 } 
  void afficherdebut()
  
{ int r,q;
 system("color C");

  for (r=1;r<=1;r++) {
      for (q=0;q<=800000000;q++);
   printf("\n\n\t\t\t\t    PROJET FONDAMENTEAUX SCIENTIQUE");
                     }
  
   for (r=1;r<=1;r++) {
      for (q=0;q<=800000000;q++);
   printf("\n\n\n\t\t\t\tUN COEUR QUI BAT AU RYTHME DE VOS REVES !");
                    }
    
     for (r=1;r<=1;r++) {
      for (q=0;q<=800000000;q++);
          printf("\n\n\n\t\t\t\t\t        BIENVENUE : \n\n");
                    }

} 
   
   
   
