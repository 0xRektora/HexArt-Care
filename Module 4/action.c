#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"
 void afficherdordf(structure t[], int n)
 { int i;
     printf(" \tLE TEMPS | LE POULS \n");
 	for(i=0;i<n;i++)
 	{printf(" \t%d |  %d \n",t[i].temps, t[i].frequencecard);
	 }
 }
 
 
 
 void affichdordrecroistemps(structure *t[], int n)
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
 
 
 
 
 void affichordredecroistemp(structure *t[], int n)
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
 
 
 
 void affichdordrecroispouls(structure *t[], int n)
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
 
 
 
 
 void affichordredecroispouls(structure *t[], int n)
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
 
