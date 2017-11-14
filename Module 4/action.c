#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"
#include "donnees.h"
 void afficherdordf(structure t[], int n) // Afficher les données dans l’ordre du fichier .csv
 { int i;
  printf("\n"); printf("\n"); printf("\n"); printf("\n");
     printf(" \tLE TEMPS :\t|");
 	for(i=0;i<n;i++)
 	{ 
	  printf(" \t%d |",t[i].temps);
	 }
	 printf("\n");
	 printf(" \tLE POULS :\t|");
	 	for(i=0;i<n;i++)
 	{  
	   printf(" \t%d |", t[i].frequencecard);
	 }
	  printf("\n"); printf("\n"); printf("\n"); printf("\n");
 }
 
 
 
 void affichdordrecroistemps(structure t[], int n) // Afficher les données en ordre croissant selon le temps
 { int i,q,temp;
   for(i=0;i<n;i++)
   {
     for(q=i+1;q<=n;q++)
      {if (t[i].temps>t[q].temps) 
         {temp=t[i].temps;
           t[i].temps=t[q].temps;
            t[q].temps=temp;
		 }
	  }
   }
    printf(" LE TEMPS : ");
 	for(i=0;i<n;i++)
 	  {printf(" \t%d |",t[i].temps);
	  }
	   printf(" \n");
	   printf(" LE POULS : ");
 	for(i=0;i<n;i++)
 	  {printf(" \t%d |",t[i].frequencecard);
	  }
 }
 
 
 void affichpotdo( structure t[] , int n ) // cette foction elle est manquante !!!!!!
 { int tmin,somme,tmax,k,w,v,i;
   float moy;
   printf("veuilliez limiter votre interval \n\t temps du debut de calcule \n\t :");
   scanf("%d",&tmin);
   printf("\n\t temps de la fin du calcul \n\t :");
   scanf("%d",&tmax);
 	for(i=0;i<n;i++)
	{if (tmin==t[i].temps) 
	 k=i;
	}
	  
 	for(i=0;i<n;i++)
	{if (tmax==t[i].temps) 
	 v=i;
	}
	w=0;
	somme=0;
	for(i=k;i<=v;i++)
	{ somme =somme+t[i].frequencecard;
	   w=w+1;
	}  
	  moy=somme/w;
	  printf("la moyenne de pouls dans l'interval est \n\t: %f",moy);
 }
 
  
  void affichordredecroistemp(structure t[], int n) // Afficher les données en ordre decroissant selon le temps
 { int i,q,temp;
   for(i=0;i<n;i++)
   {
     for(q=i+1;q<n;q++)
      {if (t[i].temps<t[q].temps) 
         {temp=t[i].temps;
           t[i].temps=t[q].temps;
            t[q].temps=temp;
		 }
	  }
   }
    printf(" LE TEMPS : ");
 	for(i=0;i<n;i++)
 	  {printf(" \t%d |",t[i].temps);
	  }
	  printf(" \n");
	   printf(" LE POULS : ");
 	for(i=0;i<n;i++)
 	  {printf(" \t%d |",t[i].frequencecard);
	  }
 }
 
 
 
 void affichdordrecroispouls(structure t[], int n) // Afficher les données en ordre croissant selon le pouls
 { int i,q,temp;
   for(i=0;i<n;i++)
   {
     for(q=i+1;q<n;q++)
      {if (t[i].frequencecard>t[q].frequencecard) 
         {temp=t[i].frequencecard;
           t[i].frequencecard=t[q].frequencecard;
            t[q].frequencecard=temp;
		 }
	  }
   }
    printf(" LE TEMPS : ");
 	for(i=0;i<n;i++)
 	  {printf(" \t%d |",t[i].temps);
	  }
	  printf(" \n");
	   printf(" LE POULS : ");
 	for(i=0;i<n;i++)
 	  {printf(" \t%d |",t[i].frequencecard);
	  }
 }
 
 
 
 
 void affichordredecroispouls(structure t[], int n) // Afficher les données en ordre decroissant selon le pouls
 { int i,q,temp;
   for(i=0;i<n;i++)
   {
     for(q=i+1;q<n;q++)
      {if (t[i].frequencecard<t[q].frequencecard) 
         {temp=t[i].frequencecard;
           t[i].frequencecard=t[q].frequencecard;
            t[q].frequencecard=temp;
		 }
	  }
   }
    printf(" LE TEMPS : ");
 	for(i=0;i<n;i++)
 	  {printf(" \t%d |",t[i].temps);
	  }
	  printf(" \n");
	   printf(" LE POULS : ");
 	for(i=0;i<n;i++)
 	  {printf(" \t%d |",t[i].frequencecard);
	  }
 }
 
 void affichuntempspar(structure t[], int n ) //une fonction Rechercher et afficher les données pour un temps particulier
 { int tp,i,k;
    printf("veuillez donnez un temps particulier en ms :");
	scanf("%d",&tp);
	
	for(i=0;i<n;i++)
	{if (tp==t[i].temps) 
	 k=i;
	}
	   
	 printf("le pouls dans %d ms est de \n\t : %d",tp,t[k].frequencecard);  
}
  
  void affichnbdelincsv (int n) //une fonction Afficher le nombre de lignes de données actuellement en mémoire
  { printf("le nombre de ligne est de \n\t :%d",n);
  }
  void affichermin (structure t[], int n)   //Rechercher et afficher les min de pouls (avec le temps associé)
  { int min,tmin,i;
    min=t[0].frequencecard;
    tmin=t[0].temps;
    for(i=1;i<n;i++)
    {if (t[i].frequencecard<min)
	    {
	
        min=t[i].frequencecard;
        tmin=t[i].temps;
		}
	}
	printf("le min de pouls est de \n\t :%d \nson temps est \n\t :%d",min,tmin);
  }
 
  
  
  void affichermax (structure t[], int n)   //Rechercher et afficher les max de pouls (avec le temps associé)
  { int max,tmax,i;
    tmax=t[0].temps 
    max=t[0].frequencecard;
    for(i=1;i<n;i++)
    {if (t[i].frequencecard>max) 
        max=t[i].frequencecard;
        tmax=t[i].temps;
	}
	printf("le min de pouls est de \n\t :%d \nson temps est \n\t :%d",max,tmax);
  }
 
