#include <stdio.h>
#include <stdlib.h>
# define BUFFER_SIZE 1024 
#include "donnees.h"
void remplissagetab (structure *tab[],  int *n)
{  
char buffer[1024] ;
   char *record,*line;
   int q,x,i=0;
   
   FILE *fstream = fopen("test.csv","r");
   if(fstream == NULL)
   {
      printf("\n file opening failed ");
      return -1 ;
   }
   while((line=fgets(buffer,sizeof(buffer),fstream))!=NULL)
   {
     record = strtok(line,";");
     while(record != NULL)
     {  x=atoi(record);
        record = strtok(NULL,";");
        tab[i].frequencecard = atoi(record) ;  //here you can put the record into the array as per your requirement.
        record = strtok(NULL,";");
        printf("%d|",tab[i].frequencecard);
     }
     ++i ;
     *n++;

   }
   fclose(fstream);
   fstream = fopen("test.csv","r");
   printf("\n\n\n");
   while((line=fgets(buffer,sizeof(buffer),fstream))!=NULL)
   { i=0;
     record = strtok(line,";");
     while(record != NULL)
     { 
       tab[i].temps = atoi(record) ; //here you can put the record into the array as per your requirement.  
       printf("%d|",tab[i].temps);
       record = strtok(NULL,";");
        x=atoi(record);
        record = strtok(NULL,";"); 
     }
     i++;
     

   }
  
    
}
