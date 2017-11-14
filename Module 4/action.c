#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"
 void afficherdordf(structure t[], int n) // Afficher les données dans l’ordre du fichier .csv
 { int i;
     printf(" \tLE TEMPS | LE POULS \n");
 	for(i=0;i<n;i++)
 	{printf(" \t%d |  %d \n",t[i].temps, t[i].frequencecard);
	 }
 }
 
 
 
 void affichdordrecroistemps(structure *t[], int n) // Afficher les données en ordre croissant selon le temps
 { int i,q,temp;
   for(i=0;i<n;i++)
   {
     for(q=1;q<n;q++)
      {if (t[i]->temps>t[q]->temps) 
         {temp=t[i]->temps;
           t[i]->temps=t[q]->temps;
            t[q]->temps=temp;
		 }
	  }
   }
    printf(" LE TEMPS : ");
 	for(i=0;i<n;i++)
 	  {printf(" \t%d |",t[i]->temps);
	  }
	  printf(" \n");
	   printf(" LE POULS : ");
 	for(i=0;i<n;i++)
 	  {printf(" \t%d |",t[i]->frequencecard);
	  }
 }
 
 void affichpotdo(int *pp, structure t[] ) // cette foction elle est manquante !!!!!!
 { int tmin,tmax,k,tms=0;
   printf("veuilliez limiter votre interval \n\t temps du debut de calcule \n\t :");
   scanf("%d",&tmin);
   printf("\n\t temps de la fin du calcul \n\t :");
   scanf("%d",&tmax);
  do {
		tms=tms+t[i].temps;
		i++;
		k=i;
	   }while(tmin<=tms);
	   i=0;
	  
  do {
		tms=tms+t[i].temps;
		i++;
		r=i;
	   }while(tmax<=tms);
	w=0;
	for(i=k;i<r;i++)
	{ somme =some+t[i].frequencecard;
	   w++;
	}  
	  moy=somme/w;
	  
 }
 
  
  void affichordredecroistemp(structure *t[], int n) // Afficher les données en ordre decroissant selon le temps
 { int i,q,temp;
   for(i=0;i<n;i++)
   {
     for(q=1;q<n;q++)
      {if (t[i]->temps<t[q]->temps) 
         {temp=t[i]->temps;
           t[i]->temps=t[q]->temps;
            t[q]->temps=temp;
		 }
	  }
   }
    printf(" LE TEMPS : ");
 	for(i=0;i<n;i++)
 	  {printf(" \t%d |",t[i]->temps);
	  }
	  printf(" \n");
	   printf(" LE POULS : ");
 	for(i=0;i<n;i++)
 	  {printf(" \t%d |",t[i]->frequencecard);
	  }
 }
 
 
 
 void affichdordrecroispouls(structure *t[], int n) // Afficher les données en ordre croissant selon le pouls
 { int i,q,temp;
   for(i=0;i<n;i++)
   {
     for(q=1;q<n;q++)
      {if (t[i]->frequencecard>t[q]->frequencecard) 
         {temp=t[i]->frequencecard;
           t[i]->frequencecard=t[q]->frequencecard;
            t[q]->frequencecard=temp;
		 }
	  }
   }
    printf(" LE TEMPS : ");
 	for(i=0;i<n;i++)
 	  {printf(" \t%d |",t[i]->temps);
	  }
	  printf(" \n");
	   printf(" LE POULS : ");
 	for(i=0;i<n;i++)
 	  {printf(" \t%d |",t[i]->frequencecard);
	  }
 }
 
 
 
 
 void affichordredecroispouls(structure *t[], int n) // Afficher les données en ordre decroissant selon le pouls
 { int i,q,temp;
   for(i=0;i<n;i++)
   {
     for(q=1;q<n;q++)
      {if (t[i]->frequencecard<t[q]->frequencecard) 
         {temp=t[i]->frequencecard;
           t[i]->frequencecard=t[q]->frequencecard;
            t[q]->frequencecard=temp;
		 }
	  }
   }
    printf(" LE TEMPS : ");
 	for(i=0;i<n;i++)
 	  {printf(" \t%d |",t[i]->temps);
	  }
	  printf(" \n");
	   printf(" LE POULS : ");
 	for(i=0;i<n;i++)
 	  {printf(" \t%d |",t[i]->frequencecard);
	  }
 }
 
 void affichuntempspar(structure*t[], int n ) //une fonction Rechercher et afficher les données pour un temps particulier
 { int tp,tms=0,i=0;
    printf("veuillez donnez un temps particulier :");
	scanf("%d",&tp);
	do {
		tms=tms+t[i]->temps;
		i++;
	   }while(tp<=tms);
	 printf("le pouls dans %d ms est de \n\t : %d",tp,t[i]->frequencecard);  
}
  
  void affichnbdelincsv (int n) //une fonction Afficher le nombre de lignes de données actuellement en mémoire
  { printf("le nombre de ligne est de \n\t :%d",n);
  }
  void affichermin (structure*t[], int n)   //Rechercher et afficher les min de pouls (avec le temps associé)
  { int min,tmin,i=0;
    min=t[0]->frequencecard;
    for(i=1;i<n;i++)
    {if (t[i]->frequencecard<min) 
        min=t[i]->frequencecard;
        tmin=t[i]->temps;
	}
	printf("le min de pouls est de \n\t :%d \nson temps est \n\t :%d",min,tmin);
  }
  
  
  void affichermax (structure*t[], int n)   //Rechercher et afficher les max de pouls (avec le temps associé)
  { int max,tmax,i=0;
    max=t[0]->frequencecard;
    for(i=1;i<n;i++)
    {if (t[i]->frequencecard>max) 
        max=t[i]->frequencecard;
        tmax=t[i]->temps;
	}
	printf("le min de pouls est de \n\t :%d \nson temps est \n\t :%d",max,tmax);
  }
 
