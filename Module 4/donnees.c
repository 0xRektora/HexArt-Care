#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "donnees.h"

void remptab (structure tab[], int *n)
{

   char buffer[1024] ;
   char *record,*line;
   int x,i=0;
   
   FILE *fstream = fopen("test.csv","r");
   if(fstream == NULL)
   {
      printf("\n ouverture fichier echouer :/");
   }
   while((line=fgets(buffer,sizeof(buffer),fstream))!=NULL)
   {
     record = strtok(line,";");
     while(record != NULL)
     {  x=atoi(record);
        record = strtok(NULL,";");
        tab[i].frequencecard = atoi(record) ;  //here you can put the record into the array as per your requirement.
        record = strtok(NULL,";");
        
     }
     ++i ;
     *n=*n+1;
     

   }
  
   fclose(fstream);
   fstream = fopen("test.csv","r");
   printf("\n\n\n");
     i=0; // reinitialisee le compteur 
   while((line=fgets(buffer,sizeof(buffer),fstream))!=NULL)
   { 
     record = strtok(line,";");
     while(record != NULL)
     { 
       tab[i].temps = atoi(record) ; //here you can put the record into the array as per your requirement.  
       
       record = strtok(NULL,";");
        x=atoi(record);
        record = strtok(NULL,";"); 
     }
     i++;
     

   }
   
}

